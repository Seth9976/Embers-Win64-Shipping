// 函数: sub_142bcdca0
// 地址: 0x142bcdca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i_2 = arg1[2]
int32_t r9 = 0
uint64_t rax
char* i

for (i = *arg1; i u< i_2; i = &i[1])
    char r8_1 = *i
    
    if (r8_1 u> 0x20 || not(test_bit(0x100003601, zx.q(r8_1))))
        if (r8_1 != 0x25)
            break
        
        for (; i u< i_2; i = &i[1])
            rax = zx.q(*i)
            
            if (rax.b == 0xd)
                break
            
            if (rax.b == 0xa)
                break

char* i_1 = i
bool cond:0 = i u> i_2

if (i u< i_2)
    uint32_t rcx = zx.d(*i)
    
    if (((rcx - 0x5b).b & 0xfd) == 0)
        i = &i[1]
    label_142bcddf9:
        
        if (i u< i_2 && i == *arg1)
            r9 = 3
    else
        if (rcx.b == 0x7b)
            rax = sub_142bd8510(&i_1, i_2)
            i = i_1
            r9 = rax.d
            goto label_142bcddf9
        
        if (rcx.b == 0x28)
            rax = sub_142bd83f0(&i_1, i_2)
            i = i_1
            r9 = rax.d
            goto label_142bcddf9
        
        if (rcx.b == 0x3c)
            if (&i[1] u>= i_2 || i[1] != rcx.b)
                rax = sub_142bd8610(&i_1, i_2)
                i = i_1
                r9 = rax.d
            else
                i = &i[2]
            
            goto label_142bcddf9
        
        if (rcx.b == 0x3e)
            i = &i[1]
            
            if (i u>= i_2 || *i != rcx.b)
                r9 = 3
            else
                i = &i[1]
            
            goto label_142bcddf9
        
        if (rcx.b == 0x2f)
            i = &i[1]
        
        if (i u< i_2)
            while (true)
                uint64_t rcx_4 = zx.q(*i)
                
                if (rcx_4.b u<= 0x3c && test_bit(0x1000832100003601, rcx_4))
                    break
                
                rcx_4.b -= 0x3e
                
                if (rcx_4.b u<= 0x3f && test_bit(-0x5fffffff5fffffff, rcx_4))
                    break
                
                i = &i[1]
                
                if (i u>= i_2)
                    goto label_142bcde0a
            
            goto label_142bcddf9
    
label_142bcde0a:
    cond:0 = i u> i_2

if (cond:0)
    i = i_2

arg1[3].d = r9
*arg1 = i
