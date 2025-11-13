// 函数: sub_1413c4190
// 地址: 0x1413c4190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t i_2
i_2.q = 0xffffffff.q
int32_t rdx = arg1[3].d - 1

if (rdx s>= 0)
    while (i u>= *(arg1[2] + (sx.q(rdx) << 2)))
        i += 1
        int32_t temp0_1 = rdx
        rdx -= 1
        
        if (temp0_1 - 1 s< 0)
            break

int32_t rbp = arg1[1].d
i_2 = i
int32_t arg_c = rdx

while (true)
    int64_t rbx_1 = i_2.q
    
    if (rbx_1.d == rbp && (rbx_1 u>> 0x20).d == 0xffffffff)
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 0)
            sub_140915de0(arg1, 0)
        
        arg1[3].d = 0
        
        if (*(arg1 + 0x1c) != 0)
            sub_1405dadb0(&arg1[2], 0)
        
        int64_t rcx_5 = arg1[2]
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        return sub_1413c2fd0(arg1) __tailcall
    
    void* rdi_2 = sx.q(rbx_1.d) * 0xf8 + *arg1
    int64_t rcx = *(rdi_2 + 0xa8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_14125cf90(rdi_2)
    int32_t i_1 = (rbx_1 + 1).d
    int32_t rcx_2 = rbx_1:4.d
    
    if (rcx_2 s>= 0)
        while (i_1 u>= *(arg1[2] + (sx.q(rcx_2) << 2)))
            i_1 += 1
            int32_t temp1_1 = rcx_2
            rcx_2 -= 1
            
            if (temp1_1 - 1 s< 0)
                break
    
    i_2 = i_1
    arg_c = rcx_2
