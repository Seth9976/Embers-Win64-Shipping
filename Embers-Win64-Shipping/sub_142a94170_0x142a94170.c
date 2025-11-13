// 函数: sub_142a94170
// 地址: 0x142a94170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
char* rdi = nullptr
char var_158
memset(&var_158, 0, 0x55)
int64_t rbx = -1

if ((arg1 & 0x3ff) != 0x92)
    wchar16 name[0x58]
    memset(&name, 0, 0xaa)
    int32_t i_4 = LCIDToLocaleName(arg1, &name, 0x55, 0x8000000)
    
    if (i_4 s> 1)
        char r10_1 = 0
        char* rdx_1 = &var_158
        int32_t i = 0
        wchar16 (* r8)[0x58] = &name
        
        do
            *rdx_1 = *r8
            wchar16 rcx_4 = *r8
            
            if (rcx_4 == 0x5f)
                int64_t i_5 = sx.q(i)
                
                if (i_5 u>= 0x55)
                    __report_rangecheckfailure()
                    noreturn
                
                (&var_158)[i_5] = 0
                r10_1 = 1
                i_4 = i
                break
            
            if (rcx_4 == 0x2d)
                *rdx_1 = 0x5f
            else if (rcx_4 == 0)
                break
            
            i += 1
            r8 = &(*r8)[1]
            rdx_1 = &rdx_1[1]
        while (i s< 0x55)
        
        if (i_4 s>= 3)
            char rax_4 = var_158
            void var_159
            char var_157
            char var_156
            char var_155[0x5d]
            
            if (rax_4 != 0x71)
                if (rax_4 == 0x70 && var_157 == 0x72 && var_156 == 0x73)
                    var_158.w = 0x6166
                    void* rcx_6 = &var_159
                    char var_156_2 = 0
                    bool cond:3_1
                    
                    do
                        cond:3_1 = *(rcx_6 + 1) != 0
                        rcx_6 += 1
                    while (cond:3_1)
                    int64_t rdx_3 = 0
                    char i_1
                    
                    do
                        i_1 = var_155[rdx_3]
                        *(rcx_6 + rdx_3) = i_1
                        rdx_3 += 1
                    while (i_1 != 0)
            else if (var_157 == 0x75 && var_156 == 0x7a)
                char var_156_1 = 0
                void* rcx_5 = &var_159
                bool cond:2_1
                
                do
                    cond:2_1 = *(rcx_5 + 1) != 0
                    rcx_5 += 1
                while (cond:2_1)
                int64_t rdx_2 = 0
                char i_2
                
                do
                    i_2 = var_155[rdx_2]
                    *(rcx_5 + rdx_2) = i_2
                    rdx_2 += 1
                while (i_2 != 0)
        
        rdi = &var_158
        
        if (r10_1 == 0)
            goto label_142a943e7

void** rdx_4 = &data_143cca578

for (int32_t i_3 = 0; i_3 u< 0x8d; )
    if ((zx.d(arg1.w) & 0x3ff) == **rdx_4)
        int32_t rcx_7 = 0
        int32_t r9 = *((zx.q(i_3) << 4) + &data_143cca570)
        char* rdx_8
        
        if (r9 == 0)
        label_142a943a6:
            rdx_8 = *((&data_143cca578)[zx.q(i_3) * 2] + 8)
        else
            int64_t r8_2 = (&data_143cca578)[zx.q(i_3) * 2]
            
            while (true)
                if (*(r8_2 + zx.q(rcx_7) * 0x10) == arg1)
                    rdx_8 = *(r8_2 + zx.q(rcx_7) * 0x10 + 8)
                    break
                
                rcx_7 += 1
                
                if (rcx_7 u>= r9)
                    goto label_142a943a6
        
        if (rdx_8 != 0)
            int64_t rax_10
            int64_t rcx_8
            
            if (rdi != 0)
                rax_10 = -1
                
                do
                    rax_10 += 1
                while (rdx_8[rax_10] != 0)
                
                rcx_8 = -1
                
                do
                    rcx_8 += 1
                while (rdi[rcx_8] != 0)
            
            if (rdi == 0 || rax_10 u> rcx_8)
                rdi = rdx_8
        
        break
    
    i_3 += 1
    rdx_4 = &rdx_4[2]

if (rdi == 0)
    *arg4 = 1
else
label_142a943e7:
    
    do
        rbx += 1
    while (rdi[rbx] != 0)
    
    uint32_t count = arg3
    
    if (rbx.d s<= arg3)
        count = rbx.d
    
    memcpy(arg2, rdi, count)
    
    if (rbx.d s>= arg3)
        int32_t rax_14 = 0xf
        
        if (rbx.d == arg3)
            rax_14 = -0x7c
        
        *arg4 = rax_14
    else
        *(sx.q(rbx.d) + arg2) = 0
        
        if (*arg4 == 0xffffff84)
            *arg4 = 0

__security_check_cookie(rax_1 ^ &var_178)
return zx.q(rbx.d)
