// 函数: sub_141ecb750
// 地址: 0x141ecb750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
char r14 = arg4
char r13 = arg3
void* rax_1 = (*(*arg1 + 0x150))()
void* rsi = rax_1
bool rdx = sub_140b5b8a0(arg2.d, 0xe6) == 0
int32_t rcx
rcx.b = arg_10:4.d != 0
int32_t i
int64_t* var_68

if ((rdx | rcx.b) == 0)
    int64_t* var_58
    sub_1424373a0(rsi, &var_58)
    int32_t i_2
    i = i_2
    
    while (i s>= 0)
        int64_t* rdx_6 = var_58
        
        if (i s>= rdx_6[1].d)
            break
        
        int64_t* rax_8 = sub_140d3c6e0(*rdx_6 + (sx.q(i) << 3))
        
        if (rax_8 != 0)
            int64_t* rdi_2 = *(rsi + 0x98)
            int64_t rcx_8 = sx.q(*(rsi + 0xa0))
            int32_t rbx_1 = 0
            int32_t rdx_7 = 0
            var_68 = nullptr
            int32_t var_60 = 0
            int64_t r12_1 = 0
            int32_t var_5c_1 = 0
            uint64_t rsi_2 = rcx_8 << 3 u>> 3
            
            if (rdi_2 u> &rdi_2[rcx_8])
                rsi_2 = 0
            
            if (rsi_2 != 0)
                arg_10.d = zx.d(r14) * 2
                
                while (true)
                    void* r14_1 = *rdi_2
                    
                    if (rbx_1 + 1 s> rdx_7)
                        sub_1405a4f90(&var_68)
                    
                    void* rbx_4 = &var_68[sx.q(rbx_1) * 2]
                    
                    if (sx.q(rbx_1) << 4 == neg.q(var_68))
                        rbx_4 = nullptr
                    else
                        *(rbx_4 + 8) = 0
                        *rbx_4 = 0
                    
                    rdi_2 = &rdi_2[1]
                    r12_1 += 1
                    void var_78
                    void var_70
                    int64_t rcx_13 =
                        *sub_142272470(rax_8, &var_70, *sub_1420e4d10(r14_1, &var_78), 0)
                    int32_t rax_15 = *(rbx_4 + 0xc) & 0xfffffffe
                    *rbx_4 = rcx_13
                    *(rbx_4 + 8) = 0xffffffff
                    *(rbx_4 + 0xc) = (((rax_15 | zx.d(r13)) & 0xfffffffd) | arg_10.d) & 0xfffffffb
                    
                    if (r12_1 == rsi_2)
                        break
                    
                    rdx_7 = var_5c_1
                    rbx_1 += 1
                
                r14 = arg4
                r13 = arg3
            
            sub_142569d10(rax_8, &var_68)
            int64_t* rcx_15 = var_68
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rsi = rax_1
        
        i = i_2 + 1
        i_2 = i
else
    sub_1424373a0(rsi, &var_68)
    int32_t i_1
    i = i_1
    
    while (i s>= 0)
        int64_t* rdx_2 = var_68
        
        if (i s>= rdx_2[1].d)
            break
        
        int64_t* rax_4 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
        
        if (rax_4 != 0)
            int32_t var_80_1 = 0xffffffff
            char var_88_1 = 0
            sub_142569cb0(rax_4, *sub_142272470(rax_4, &arg_10, arg2, 0), r13, zx.d(r14))
        
        i = i_1 + 1
        i_1 = i
return i
