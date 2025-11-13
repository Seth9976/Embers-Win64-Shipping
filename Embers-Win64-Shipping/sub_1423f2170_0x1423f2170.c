// 函数: sub_1423f2170
// 地址: 0x1423f2170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f5b3f0
int16_t* var_48
(*(*rcx + 0xa0))(rcx, &var_48)
int16_t* const rcx_1 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    rcx_1 = var_48

int32_t arg_8 = data_143a30338
int32_t arg_10
int32_t arg_18
wchar16* result = sub_1423ea040(rcx_1, &arg_18, &arg_10, &arg_8)

if (result.b != 0)
    int32_t rcx_2 = arg_8
    int32_t rbx_1 = 0
    int32_t r14_1
    
    if (rcx_2 == 0)
        r14_1 = 0
    else if (rcx_2 == 1)
        r14_1 = 1
    else
        r14_1 = 2
    
    int32_t r12_1 = arg_18
    int32_t r15_1 = arg_10
    
    if (data_143a30330 != r12_1 || data_143a30334 != r15_1 || data_143a30338 != r14_1
            || data_143a3033c != 0)
        int32_t rdx_2 = data_14399ff18
        int32_t rcx_4 = data_14399ff24 + 1
        int64_t rbp
        rbp.b = 0
        data_143a30330 = r12_1
        data_143a30334 = r15_1
        data_143a30338 = r14_1
        data_143a3033c = 0
        data_14399ff24 = rcx_4
        int64_t rdi_1 = sx.q(rdx_2 - 1)
        
        if (rdx_2 - 1 s>= 0)
            int64_t rsi_2 = rdi_1 << 4
            int64_t temp0_1
            
            do
                int64_t rax_3 = data_14399ff10
                
                if (*(rsi_2 + rax_3 + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_5 = *(rsi_2 + rax_3)
                    
                    if (rcx_5 == 0)
                        rbp.b = 1
                    else if ((*(*rcx_5 + 0x50))(rcx_5, zx.q(r12_1), zx.q(r15_1)) == 0)
                        rbp.b = 1
                
                rsi_2 -= 0x10
                temp0_1 = rdi_1
                rdi_1 -= 1
            while (temp0_1 - 1 s>= 0)
            rcx_4 = data_14399ff24
            rdx_2 = data_14399ff18
        
        data_14399ff24 = rcx_4 - 1
        
        if (rbp.b != 0 && rcx_4 - 1 s<= 0)
            int32_t rsi_3 = rdx_2
            
            if (rdx_2 s> 0)
                int64_t* rdi_2 = nullptr
                
                do
                    int64_t rax_6 = data_14399ff10
                    
                    if (*(rdi_2 + rax_6 + 8) == 0)
                        sub_1405a4880(&data_14399ff10, rbx_1, 1, 1)
                    else
                        int64_t* rcx_7 = *(rdi_2 + rax_6)
                        
                        if (rcx_7 == 0)
                            sub_1405a4880(&data_14399ff10, rbx_1, 1, 1)
                        else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                            sub_1405a4880(&data_14399ff10, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_2 = &rdi_2[2]
                    
                    rdx_2 = data_14399ff18
                while (rbx_1 s< rdx_2)
            
            int32_t rax_9 = rdx_2 * 2
            
            if (rax_9 s<= 2)
                rax_9 = 2
            
            data_14399ff20 = rax_9
            
            if (rsi_3 s> rax_9 && data_14399ff1c != rdx_2)
                sub_1405a5410(&data_14399ff10, rdx_2)
        
        result = data_143f5b298
        
        if (result != 0)
            void* rcx_8 = *(result + 0x788)
            
            if (rcx_8 != 0 && *(rcx_8 + 0xc0) != 0)
                sub_140a4bcc0(u"Resizing viewport due to setres change, %d x %d\n", zx.q(r12_1))
                int64_t* rcx_10 = *(*(data_143f5b298 + 0x788) + 0xc0)
                result = (*(*rcx_10 + 8))(rcx_10, zx.q(r12_1), zx.q(r15_1), zx.q(r14_1))

int16_t* rcx_11 = var_48

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
