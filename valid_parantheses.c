bool isValid(char* s) {
    int top=-1;
    char arr[10000];
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]=='(') || (s[i]=='{') || (s[i]=='['))
        {
            top++;
            arr[top]=s[i];
        }
        else
        {
            if((top==-1) || ((s[i]==')') && (arr[top]!='(')))
            {
                top++;
                arr[top]=s[i];
            }
            else if((top==-1) || ((s[i]=='}') && (arr[top]!='{')))
            {
                top++;
                arr[top]=s[i];
            }
            else if((top==-1) || ((s[i]==']') && (arr[top]!='[')))
            {
                top++;
                arr[top]=s[i];
            }
            else
            {
                top--;
            }
        }
    }
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
