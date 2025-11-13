// 函数: sub_141e6b5f0
// 地址: 0x141e6b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    void* rsi_1 = *(arg1 + 0x2e8)
    int32_t i_1 = 0
    
    if (rsi_1 != 0)
        sub_141e5bd50(rsi_1 + 0x10, 0)
        int64_t rcx_1 = *(rsi_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        arg3 = j_sub_140a74f90(rsi_1)
        *(arg1 + 0x2e8) = 0
    
    int32_t* rax = j_sub_140a82f30(0x20)
    int32_t* rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        *rax = 0
        rax[2] = 0
        *(rax + 0x10) = 0
        *(rax + 0x18) = 0
    
    *(arg1 + 0x2e8) = rbx_1
    int64_t* rcx_3 = arg2[1]
    int32_t* rdx_1 = *rcx_3
    
    if (&rdx_1[1] u> rcx_3[1])
        int32_t* rdx_2 = rbx_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_2, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        *rbx_1 = *rdx_1
        int64_t* rax_3 = arg2[1]
        *rax_3 += 4
    
    result = (*(*arg2 + 0x140))(arg2, &rbx_1[1])
    
    if ((arg2[5].b & 1) != 0)
        result, arg3 = sub_141e5bd50(&rbx_1[4], *rbx_1)
        int32_t i = 0
        
        if (*rbx_1 s> 0)
            do
                void* rax_6 = j_sub_140a82f30(0x28)
                void* const rsi_2 = rax_6
                
                if (rax_6 == 0)
                    rsi_2 = nullptr
                else
                    *(rax_6 + 0x18) = 0
                    *(rax_6 + 0x20) = 0
                    *(rax_6 + 0x24) = 0
                    *(rax_6 + 8) = 0
                    *(rax_6 + 0x10) = 0xffffffff
                
                int64_t rbp_1 = sx.q(rbx_1[6])
                int32_t rax_7 = (rbp_1 + 1).d
                rbx_1[6] = rax_7
                
                if (rax_7 s> rbx_1[7])
                    sub_140638870(&rbx_1[4])
                
                result = *(rbx_1 + 0x10)
                i += 1
                result[rbp_1] = rsi_2
            while (i s< *rbx_1)
    
    if (rbx_1[6] s> 0)
        int32_t** rsi_3 = nullptr
        
        do
            result, arg3 = sub_142374f20(*(rsi_3 + *(rbx_1 + 0x10)), arg2, arg1, i_1, arg3)
            i_1 += 1
            rsi_3 = &rsi_3[1]
        while (i_1 s< rbx_1[6])

return result
