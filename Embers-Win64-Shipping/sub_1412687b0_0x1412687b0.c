// 函数: sub_1412687b0
// 地址: 0x1412687b0
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
    
    if (rbx_1.d == rbp)
        uint32_t result = (rbx_1 u>> 0x20).d
        
        if (result == 0xffffffff)
            arg1[1].d = 0
            
            if (*(arg1 + 0xc) != 0)
                result = sub_140888ba0(arg1, 0)
            
            arg1[3].d = 0
            
            if (*(arg1 + 0x1c) == 0)
                return result
            
            return sub_1405dadb0(&arg1[2], 0) __tailcall
    
    int64_t rdi_3 = (sx.q(rbx_1.d) << 7) + *arg1
    int64_t* rcx = *(rdi_3 + 0x28)
    
    if (rcx != 0)
        sub_1419d6470(rcx)
    
    int64_t* rcx_1 = *(rdi_3 + 0x20)
    
    if (rcx_1 != 0)
        sub_1419d6470(rcx_1)
    
    int64_t* rcx_2 = *(rdi_3 + 0x18)
    
    if (rcx_2 != 0)
        sub_1419d6470(rcx_2)
    
    int64_t* rcx_3 = *(rdi_3 + 0x10)
    
    if (rcx_3 != 0)
        sub_1419d6470(rcx_3)
    
    int64_t* rcx_4 = *(rdi_3 + 8)
    
    if (rcx_4 != 0)
        sub_1419d6470(rcx_4)
    
    int32_t i_1 = (rbx_1 + 1).d
    int32_t rcx_5 = rbx_1:4.d
    
    if (rcx_5 s>= 0)
        while (i_1 u>= *(arg1[2] + (sx.q(rcx_5) << 2)))
            i_1 += 1
            int32_t temp1_1 = rcx_5
            rcx_5 -= 1
            
            if (temp1_1 - 1 s< 0)
                break
    
    i_2 = i_1
    arg_c = rcx_5
