// 函数: sub_140cb7c70
// 地址: 0x140cb7c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

void arg_20
int64_t rbx = *sub_140b58260(&arg_20, rdx, 1)
sub_140d212c0()

if (data_1439aace8 != data_1439aad14)
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &data_1439aad18
    void* rcx_3 = data_1439aad20
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t i = *(r8 + (((sx.q(data_1439aad28) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = data_1439aace0
        
        do
            int64_t rdx_4 = sx.q(i) * 3
            
            if (*(r8_1 + (rdx_4 << 3)) == rbx)
                if (i == 0xffffffff)
                    break
                
                int64_t var_38 = 0
                int64_t var_30_1 = 0
                int64_t var_28
                int64_t* result = sub_140baee70(&var_28, arg1, &var_38)
                void** result_1 = result
                
                if (arg3 != result)
                    void* rcx_7 = *arg3
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    *arg3 = *result_1
                    *result_1 = nullptr
                    arg3[1].d = result_1[1].d
                    *(arg3 + 0xc) = *(result_1 + 0xc)
                    result_1[1] = 0
                
                int64_t rcx_9 = var_28
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                int64_t rcx_10 = var_38
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                result.b = 1
                return result
            
            i = *(r8_1 + (rdx_4 << 3) + 0x10)
        while (i != 0xffffffff)

return sub_140ba1330(arg1, arg2, arg3, 1)
