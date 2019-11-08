char * reverseVowels(char * s){
    int i=0;
    int len=strlen(s)-1;
     while(i<len)
        {
        while((i<len)&&s[i]!='a'&&s[i]!='e'
        &&s[i]!='i'&&s[i]!='o'
        &&s[i]!='u'&&s[i]!='A'
        &&s[i]!='E'&&s[i]!='I'
        &&s[i]!='O'&&s[i]!='U')
        {
            i++;
        }
         while((i<len)&&s[len]!='a'&&s[len]!='e'
        &&s[len]!='i'&&s[len]!='o'
        &&s[len]!='u'&&s[len]!='A'
        &&s[len]!='E'&&s[len]!='I'
        &&s[len]!='O'&&s[len]!='U')
        {
            len--;
        }
        char tmp;
        tmp=s[i];
        s[i]=s[len];
        s[len]=tmp;
        i++;len--;
        }
    return s;
}