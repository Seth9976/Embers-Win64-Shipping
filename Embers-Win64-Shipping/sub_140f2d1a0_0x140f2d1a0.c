// 函数: sub_140f2d1a0
// 地址: 0x140f2d1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg3[1].d)
int32_t i = 0
int64_t r15 = sx.q(arg4[1].d)
int128_t zmm6 = arg2
int128_t zmm7 = zx.o(0)
int32_t arg_18

if (result.d s> 0)
    int64_t rsi_1 = 0
    int32_t* rbx_1 = nullptr
    
    do
        if (rsi_1 s>= r15)
            zmm6.d = zmm6.d f- *(*arg3 + (rsi_1 << 2))
        else
            int64_t rdi_1 = *arg4
            arg_18 = 0
            
            if (*(rbx_1 + rdi_1 + 4) == 0)
                zmm6.d = zmm6.d f- *(*arg3 + (rsi_1 << 2))
            else
                if (*(rbx_1 + rdi_1 + 0x10) != 0)
                    int64_t* rcx = *(rbx_1 + rdi_1 + 8)
                    
                    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                        int64_t* rcx_1
                        
                        if (*(rbx_1 + rdi_1 + 0x10) == 0)
                            rcx_1 = nullptr
                        else
                            rcx_1 = *(rbx_1 + rdi_1 + 8)
                        
                        (*(*rcx_1 + 0x48))(rcx_1)
                        *(rbx_1 + rdi_1) = arg5
                
                arg5 = *(rbx_1 + rdi_1)
                
                if (arg5 == 0f)
                    zmm6.d = zmm6.d f- *(*arg3 + (rsi_1 << 2))
                else
                    zmm7.d = zmm7.d f+ arg5
        
        result = zx.q(arg3[1].d)
        i += 1
        rsi_1 += 1
        rbx_1 = &rbx_1[6]
    while (i s< result.d)

int32_t i_1 = 0

if (result.d s> 0)
    int64_t rsi_2 = 0
    int32_t* rbx_2 = nullptr
    
    do
        if (rsi_2 s>= r15)
            arg5 = *(*arg3 + (rsi_2 << 2))
        else
            int64_t rdi_2 = *arg4
            arg_18 = 0
            
            if (*(rbx_2 + rdi_2 + 4) == 0)
                arg5 = *(*arg3 + (rsi_2 << 2))
            else
                if (*(rbx_2 + rdi_2 + 0x10) != 0)
                    int64_t* rcx_2 = *(rbx_2 + rdi_2 + 8)
                    
                    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                        int64_t* rcx_3
                        
                        if (*(rbx_2 + rdi_2 + 0x10) == 0)
                            rcx_3 = nullptr
                        else
                            rcx_3 = *(rbx_2 + rdi_2 + 8)
                        
                        (*(*rcx_3 + 0x48))(rcx_3)
                        *(rbx_2 + rdi_2) = arg5
                
                arg5 = *(rbx_2 + rdi_2)
                
                if (arg5 == 0f)
                    arg5 = *(*arg3 + (rsi_2 << 2))
                else
                    arg5 = arg5 f/ zmm7.d f* zmm6.d
        
        result = *arg1
        i_1 += 1
        rbx_2 = &rbx_2[6]
        *(result + (rsi_2 << 2)) = arg5
        rsi_2 += 1
    while (i_1 s< arg3[1].d)

return result
