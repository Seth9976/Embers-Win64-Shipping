// 函数: sub_142371860
// 地址: 0x142371860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = sub_141e644e0()

if (result.b != 0)
    result = sx.q(*(arg1 + 0x30))
    int64_t** i = *(arg1 + 0x28)
    
    for (void* rsi_1 = &i[result]; i != rsi_1; i = &i[1])
        int64_t* rbx_1 = *i
        
        if (rbx_1 != 0)
            sub_140cd85e0(rbx_1)
            
            if (arg2 != 0)
                int64_t rdx
                rdx.b = 1
                (*(*rbx_1 + 0x2d8))(rbx_1, rdx)
            
            void* rax_1 = sub_1425a2090()
            void* rdx_1 = rbx_1[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                char* result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    void* rbx_2 = rbx_1[0xe]
                    
                    if (rbx_2 != 0)
                        result = sub_14236bfb0(rbx_2, nullptr)
                        
                        if (result.b != 0)
                            result = *(rbx_2 + 0x2e8)
                            int32_t rcx_3
                            
                            if (result == 0)
                                rcx_3 = 0
                            else
                                rcx_3 = *(result + 0x18)
                            
                            if (rcx_3 u> 1)
                                int64_t* rax_3 = sub_1405f7040(sub_141f88540())
                                int64_t var_48_1 = 0
                                void** const var_38_1 = &data_142d42d18
                                int64_t (* var_58)() = sub_140594850
                                result =
                                    (*(*rax_3 + 0xe8))(rax_3, rbx_2, 1, &var_58, 0xff, 0, var_58)

return result
