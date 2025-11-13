// 函数: sub_142b3b6e0
// 地址: 0x142b3b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* r9 = nullptr
int32_t r13 = 0
uint64_t r15
r15.b = 0
char* var_80 = nullptr
uint32_t rsi = 0
char* r10 = nullptr
void* i_1 = nullptr
uint64_t rbp = 0
char* r8 = arg2
int32_t var_88 = 0
void* i_4 = arg2

while (true)
    char rcx = *arg2
    
    if (rcx - 0x30 u> 9)
        if (rcx == 0x2e && r10 == 0)
            void* i_5 = i_4 + 1
            r10 = arg2
            
            if (arg2 != i_4)
                i_5 = i_4
            
            arg2 = &arg2[1]
            i_4 = i_5
            continue
        
        if (arg2 != r8)
            break
        
        if (rcx != 0x2d)
            if (rcx != 0x2b)
                break
            
            i_4 += 1
            arg2 = &arg2[1]
        else
            i_4 += 1
            r15.b = 0x80
            arg2 = &arg2[1]
    else
        rsi += 1
        i_1 = arg2
        arg2 = &arg2[1]

if (i_1 != 0)
    char rax_11 = *arg2
    
    if (rax_11 != 0)
        rbp = 1
        
        if (((rax_11 - 0x45) & 0xdf) != 0)
            goto label_142b3bac7
        
        char rax_12 = arg2[1]
        void* rdx = &arg2[1]
        
        if (rax_12 == 0x2d)
            r9 = 1
            rdx += 1
        else if (rax_12 == 0x2b)
            rdx += 1
        
        char rax_13 = *rdx
        
        if (rax_13 == 0)
            goto label_142b3bac7
        
        if (rax_13 == 0x30)
            while (*(rdx + 1) != 0)
                bool cond:1_1 = *(rdx + 1) == 0x30
                rdx += 1
                
                if (not(cond:1_1))
                    break
        
        char i = *rdx
        uint64_t rcx_4 = 0
        void* r8_1 = rdx
        
        if (i s>= 0x30)
            while (i s<= 0x39)
                rdx += 1
                rcx_4 = zx.q(sx.d(i) + (((rcx_4 * 5).d - 0x18) << 1))
                i = *rdx
                
                if (i s< 0x30)
                    break
        
        if (*rdx != 0)
            goto label_142b3bac7
        
        if (rdx u>= r8_1 + 0xa && (rdx u> r8_1 + 0xa || *r8_1 s> 0x31))
            rcx_4 = 0x773593fe
        
        rbp = 0
        r13 = neg.d(rcx_4.d)
        bool cond:3_1 = r9.b == 0
        r9 = nullptr
        
        if (cond:3_1)
            r13 = rcx_4.d
        
    label_142b3b98b:
        var_88 = 0
    
    if (*i_4 == 0x30)
        void* i_6 = i_4
        
        if (i_4 u< i_1)
            do
                char rcx_7 = *i_6
                
                if (rcx_7 != 0x2e)
                    if (rcx_7 != 0x30)
                        break
                    
                    rsi -= 1
                
                i_6 += 1
                i_4 += 1
            while (i_6 u< i_1)
    
    if (r10 != 0 && r10 u< i_1)
        r13 += r10.d - i_1.d
    
    char* r8_2
    
    if (rsi s> *arg3)
        uint32_t rcx_8
        
        if (rsi s> 0x31)
            rcx_8 = rsi
        else
            rcx_8 = zx.d(*(sx.q(rsi) + &data_14366c490))
        
        void var_78
        r8_2 = &var_78
        
        if (rcx_8 s<= 0x2d)
            goto label_142b3ba15
        
        char* rax_18 = sub_142a7dd00(sx.q(rcx_8))
        var_80 = rax_18
        r9 = rax_18
        
        if (rax_18 != 0)
            r8_2 = rax_18
            goto label_142b3ba15
        
        rbp = zx.q((&rax_18[0x10]).d)
    label_142b3bac7:
        
        if ((rbp.b & 0xdd) != 0)
            if (not(test_bit(rbp.d, 0x1e)))
                *arg1 = 1
                arg1[1].w = 0x20
            else
                rbp = zx.q(rbp.d) & 0xbfffffff
        
        sub_142b38f50(arg3, rbp.d)
    else
        r8_2 = arg1 + 9
    label_142b3ba15:
        char* rcx_10 = r8_2
        
        for (; i_1 u>= i_4; i_1 -= 1)
            char rax_19 = *i_1
            
            if (rax_19 != 0x2e)
                *rcx_10 = rax_19 - 0x30
                rcx_10 = &rcx_10[1]
        
        arg1[1].b = r15.b
        *(arg1 + 4) = r13
        *arg1 = rsi
        int32_t rdx_1 = *arg3
        int32_t var_84
        
        if (rsi s> rdx_1)
            var_84 = 0
            sub_142b3a960(arg1, arg3, r8_2, rsi, &var_84, &var_88)
        label_142b3baa8:
            sub_142b39f50(arg1, arg3, &var_84, &var_88)
            r9 = var_80
            rbp = zx.q(var_88)
        else if (r13 s<= arg3[2] - rsi || r13 - 1 s> arg3[1] - rdx_1)
            var_84 = 0
            goto label_142b3baa8
        
        if (r9 != 0)
            sub_142a7dcd0(r9)
        
        if (rbp.d != 0)
            goto label_142b3bac7
else
    rbp = zx.q((i_1 + 1).d)
    
    if (*arg2 == 0 || r10 != 0)
        goto label_142b3bac7
    
    arg1[1].w = 0
    char* rax_3 = nullptr
    *arg1 = rbp
    
    while (true)
        char rcx_1 = *(rax_3 + arg2)
        
        if (rcx_1 != *(rax_3 + "infinity") && rcx_1 != *(rax_3 + "INFINITY"))
            char* rax_4 = nullptr
            
            while (true)
                char rcx_2 = *(rax_4 + arg2)
                
                if (rcx_2 != *(rax_4 + 0x14366c5b8) && rcx_2 != *(rax_4 + 0x14366c5b4))
                    break
                
                if (rcx_2 == 0)
                    goto label_142b3b8ca
                
                rax_4 = &rax_4[1]
            
            arg1[1].b = r15.b | 0x20
            
            if (((*arg2 - 0x53) & 0xdf) == 0)
                arg2 = &arg2[1]
                r15.b |= 0x10
                arg1[1].b = r15.b
            
            if (((*arg2 - 0x4e) & 0xdf) != 0)
                goto label_142b3bac7
            
            if (((arg2[1] - 0x41) & 0xdf) != 0)
                goto label_142b3bac7
            
            if (((arg2[2] - 0x4e) & 0xdf) != 0)
                goto label_142b3bac7
            
            i_4 = &arg2[3]
            
            if (arg2[3] == 0x30)
                do
                    i_4 += 1
                while (*i_4 == 0x30)
            
            char i_2 = *i_4
            
            if (i_2 == 0)
                goto label_142b3bafc
            
            void* i_3 = i_4
            
            if (i_2 s>= 0x30)
                while (i_2 s<= 0x39)
                    i_2 = *(i_3 + 1)
                    i_1 = i_3
                    i_3 += 1
                    rsi += 1
                    
                    if (i_2 s< 0x30)
                        break
            
            if (*i_3 != 0)
                goto label_142b3bac7
            
            int32_t rcx_3 = *arg3
            
            if (rsi s> rcx_3 - 1)
                if (arg3[6].b != 0)
                    goto label_142b3bac7
                
                if (rsi s> rcx_3)
                    goto label_142b3bac7
            
            r15 = zx.q(arg1[1].b)
            rbp = 0
            goto label_142b3b98b
        
        if (rcx_1 == 0)
        label_142b3b8ca:
            r15.b |= 0x40
            arg1[1].b = r15.b
            break
        
        rax_3 = &rax_3[1]

label_142b3bafc:
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
