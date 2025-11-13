// 函数: sub_14152f370
// 地址: 0x14152f370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rax_4)
    rax_4 = arg_8

int64_t rbx = sx.q(arg2[1].d)

if (rax_4 s> rbx.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rbx << 3), 0, sx.q(rax_4 - rbx.d) << 3)
    rax_4 = arg_8
else if (rax_4 s< rbx.d)
    sub_14174d260(arg2, rax_4, rbx.d - rax_4, 1)
    rax_4 = arg_8

int32_t rsi_3 = 0

if (rax_4 s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rcx_6 = arg1[0x12]
        int64_t* r14_1 = *arg2
        (*(*rcx_6 + 0x1d8))(rcx_6, &data_1439a9528)
        int32_t rax_7
        int512_t zmm1
        rax_7, zmm1 = sub_140b4e7c0(arg1[0x12], &data_1439a9528)
        
        if (rax_7 s>= 5)
            int64_t arg_10 = *(r14_1 + r15_1)
            sub_1416f2100(arg1, &arg_10, zmm1)
            
            if ((*(arg1[0x12] + 0x28) & 1) != 0)
                void*** rbx_2 = *(r14_1 + r15_1)
                int64_t rax_10 = arg_10
                
                if (rbx_2 != rax_10)
                    *(r14_1 + r15_1) = rax_10
                    
                    if (rbx_2 != 0)
                        sub_1417059c0(rbx_2)
                        j_sub_140a74f90(rbx_2)
        
        rsi_3 += 1
        r15_1 += 8
    while (rsi_3 s< arg_8)

return arg1
