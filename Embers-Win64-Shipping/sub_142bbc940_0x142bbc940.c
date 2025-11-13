// 函数: sub_142bbc940
// 地址: 0x142bbc940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x3e8)
uint64_t result_2 = 0
int32_t result_1 = 0

if (rbx == 0)
    return 0

int32_t result

if (*(rbx + 0x10f0) != 0)
label_142bbcb4f:
    int128_t* rax_21 = *(rbx + 0x10f0)
    *arg2 = *rax_21
    arg2[1] = rax_21[1]
    arg2[2] = rax_21[2]
    result = result_2.d
    arg2[3].q = rax_21[3].q
else
    int64_t* rax_1 = sub_142b99860(*(arg1 + 0x98), 0x38, &result_1)
    result = result_1
    
    if (result == 0)
        int32_t rcx_1 = *(rbx + 0x5e0)
        int64_t rax_2
        
        if (rcx_1 == 0xffff)
            rax_2 = 0
        else if (rcx_1 u<= 0x186)
            int64_t rax_4 = *(rbx + 0x10e0)
            
            if (rax_4 != 0)
                rax_2 = (*(rax_4 + 0x28))()
            else
                rax_2 = 0
        else
            uint64_t rcx_2 = zx.q(rcx_1 - 0x187)
            
            if (rcx_2.d u>= *(rbx + 0x5c0))
                rax_2 = 0
            else
                rax_2 = *(*(rbx + 0x5c8) + (rcx_2 << 3))
        
        *rax_1 = rax_2
        int32_t rcx_3 = *(rbx + 0x5e4)
        int64_t rax_5
        
        if (rcx_3 == 0xffff)
            rax_5 = 0
        else if (rcx_3 u<= 0x186)
            int64_t rax_7 = *(rbx + 0x10e0)
            
            if (rax_7 != 0)
                rax_5 = (*(rax_7 + 0x28))()
            else
                rax_5 = 0
        else
            uint64_t rcx_4 = zx.q(rcx_3 - 0x187)
            
            if (rcx_4.d u>= *(rbx + 0x5c0))
                rax_5 = 0
            else
                rax_5 = *(*(rbx + 0x5c8) + (rcx_4 << 3))
        
        rax_1[1] = rax_5
        int32_t rcx_5 = *(rbx + 0x5ec)
        int64_t rax_8
        
        if (rcx_5 == 0xffff)
            rax_8 = 0
        else if (rcx_5 u<= 0x186)
            int64_t rax_10 = *(rbx + 0x10e0)
            
            if (rax_10 != 0)
                rax_8 = (*(rax_10 + 0x28))()
            else
                rax_8 = 0
        else
            uint64_t rcx_6 = zx.q(rcx_5 - 0x187)
            
            if (rcx_6.d u>= *(rbx + 0x5c0))
                rax_8 = 0
            else
                rax_8 = *(*(rbx + 0x5c8) + (rcx_6 << 3))
        
        rax_1[2] = rax_8
        int32_t rcx_7 = *(rbx + 0x5f0)
        int64_t rax_11
        
        if (rcx_7 == 0xffff)
            rax_11 = 0
        else if (rcx_7 u<= 0x186)
            int64_t rax_13 = *(rbx + 0x10e0)
            
            if (rax_13 != 0)
                rax_11 = (*(rax_13 + 0x28))()
            else
                rax_11 = 0
        else
            uint64_t rcx_8 = zx.q(rcx_7 - 0x187)
            
            if (rcx_8.d u>= *(rbx + 0x5c0))
                rax_11 = 0
            else
                rax_11 = *(*(rbx + 0x5c8) + (rcx_8 << 3))
        
        rax_1[3] = rax_11
        int32_t rcx_9 = *(rbx + 0x5f4)
        
        if (rcx_9 != 0xffff)
            if (rcx_9 u<= 0x186)
                int64_t rax_15 = *(rbx + 0x10e0)
                
                if (rax_15 != 0)
                    result_2 = (*(rax_15 + 0x28))()
            else
                uint64_t rcx_10 = zx.q(rcx_9 - 0x187)
                
                if (rcx_10.d u< *(rbx + 0x5c0))
                    result_2 = *(*(rbx + 0x5c8) + (rcx_10 << 3))
        
        rax_1[4] = result_2
        rax_1[5].d = *(rbx + 0x5fc)
        *(rax_1 + 0x2c) = *(rbx + 0x5f8)
        *(rax_1 + 0x2e) = *(rbx + 0x600)
        rax_1[6].w = *(rbx + 0x604)
        *(rbx + 0x10f0) = rax_1
        result_2 = zx.q(result_1)
        goto label_142bbcb4f

return result
