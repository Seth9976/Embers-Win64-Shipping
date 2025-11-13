// 函数: sub_14089a0d0
// 地址: 0x14089a0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_8 = 0
int32_t arg_10 = 0
int32_t arg_18 = 0
int64_t* rcx = *(*(arg1 + 0xf8) + 8)
uint32_t rax_2 = (*(*rcx + 0x20))(rcx, &arg_18, &arg_10)

if (rax_2 == 0)
    void* rcx_2 = *(arg1 + 0xf8)
    rax_2 = divu.dp.d(0:arg_10, *(rcx_2 + 0x14))
    
    if (rax_2 == *(rcx_2 + 0x18))
        while (true)
            Sleep(1)
            int64_t* rcx_3 = *(*(arg1 + 0xf8) + 8)
            (*(*rcx_3 + 0x48))(rcx_3, &arg_8)
            rax_2 = arg_8
            
            if ((rax_2.b & 2) != 0)
                int64_t* rcx_4 = *(*(arg1 + 0xf8) + 8)
                (*(*rcx_4 + 0xa0))(rcx_4)
                int64_t* rcx_5 = *(*(arg1 + 0xf8) + 8)
                (*(*rcx_5 + 0x48))(rcx_5, &arg_8)
                rax_2 = arg_8
                
                if ((rax_2.b & 2) != 0)
                    break
            
            int64_t* rcx_7 = *(*(arg1 + 0xf8) + 8)
            int64_t rax_13 = *rcx_7
            
            if ((rax_2.b & 1) != 0)
                int32_t rax_14 = (*(rax_13 + 0x20))(rcx_7, &arg_18, &arg_10)
                
                if (rax_14 != 0)
                    return sub_14089b0c0("DirectSound GetCurrentPosition", rax_14)
            else
                rax_2 = (*(rax_13 + 0x60))(rcx_7, 0, 0, 1)
                
                if (rax_2 != 0)
                    break
            
            void* rcx_8 = *(arg1 + 0xf8)
            uint32_t temp0_2 = divu.dp.d(0:arg_10, *(rcx_8 + 0x14))
            
            if (temp0_2 != *(rcx_8 + 0x18))
                return temp0_2
else if (rax_2 == 0x88780096)
    int64_t* rcx_1 = *(*(arg1 + 0xf8) + 8)
    return (*(*rcx_1 + 0xa0))(rcx_1)

return rax_2
