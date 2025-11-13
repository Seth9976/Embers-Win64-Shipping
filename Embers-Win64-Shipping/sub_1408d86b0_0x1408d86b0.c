// 函数: sub_1408d86b0
// 地址: 0x1408d86b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* result = sub_140865c40(arg1 + 0x98, &arg_8, arg2)
int64_t rdx_1 = sx.q(arg_8)

if (rdx_1.d == 0xffffffff)
    return result

int64_t* rsi_1 = *(*(arg1 + 0x98) + rdx_1 * 0x18 + 8)
sub_1405c2fb0(arg1 + 0x98, rdx_1.d)

if (*(rsi_1 + 0x24) == 2)
    *(arg1 + 0x40) -= 1

int64_t rbx_1 = rsi_1[3]
arg_8.q = rbx_1
int64_t* rdi_3

if (*(arg1 + 0x50) == *(arg1 + 0x7c))
label_1408d877e:
    rdi_3 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx_1.d) + arg3
    void* r8_2 = arg1 + 0x80
    void* rcx_3 = *(r8_2 + 8)
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    int32_t rax_5 = *(r8_2 + (((sx.q(*(arg1 + 0x90)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1408d877e_1:
        rdi_3 = nullptr
    else
        while (true)
            rdi_3 = (sx.q(rax_5) << 5) + *(arg1 + 0x48)
            
            if (*rdi_3 == rbx_1)
                break
            
            rax_5 = rdi_3[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_1408d877e_2
        
        if (rax_5 == 0xffffffff)
        label_1408d877e_2:
            rdi_3 = nullptr

int64_t r8_3 = sx.q(rdi_3[2].d)

if (r8_3.d != 1)
    int64_t* r9_1 = rdi_3[1]
    int64_t* rdx_7 = r9_1
    void* rcx_5 = &r9_1[r8_3]
    
    if (r9_1 != rcx_5)
        do
            if (*rdx_7 == rsi_1)
                int32_t rdx_9 = ((rdx_7 - r9_1) s>> 3).d
                
                if (rdx_9 != 0xffffffff)
                    void* rcx_6 = &r9_1[sx.q(rdx_9)]
                    memmove(rcx_6, rcx_6 + 8, (r8_3.d - rdx_9 - 1) << 3)
                    rdi_3[2].d -= 1
                
                break
            
            rdx_7 = &rdx_7[1]
        while (rdx_7 != rcx_5)
else
    sub_1408d83c0(arg1 + 0x48, rsi_1[3])

if (rsi_1[0xe] != 0)
    void* rax_7 = rsi_1[0x10]
    void* rcx_7 = &rsi_1[0x12]
    int32_t zmm1 = rsi_1[4].d
    
    if (rax_7 != 0)
        rcx_7 = rax_7
    
    int32_t arg_18 = 0x3f800000
    int32_t arg_20 = zmm1
    arg_8.b = 1
    int64_t* var_28 = rsi_1
    rsi_1[0xe]((*(*rcx_7 + 8))(rcx_7), &var_28, &arg_20, &arg_18, &arg_8)

return (**rsi_1)(rsi_1, 1)
