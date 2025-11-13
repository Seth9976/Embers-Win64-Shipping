// 函数: sub_14225dba0
// 地址: 0x14225dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()
int64_t result_2 = result

if (arg1[0x67] == 0 && arg1[0x68] != 0)
    result = sub_142492810()
    
    if (result != 0)
        void* rdx = arg1[0x68]
        int64_t r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx + 0x38))
            int64_t result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) == r8_1 && rdx != 0)
                int64_t* rcx = *(result_2 + 0x128)
                
                if (rcx != 0)
                    result = (*(*rcx + 0x798))(rcx, arg1)
                    
                    if (result.b != 0 || arg2 != 0)
                    label_14225dc54:
                        int64_t* rsi
                        
                        if (arg1[0x68] == 0)
                            rsi = nullptr
                        else
                            void* rax_2 = sub_142492810()
                            
                            if (rax_2 == 0)
                                rsi = nullptr
                            else
                                rsi = arg1[0x68]
                                int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                                
                                if (rax_3.d s> rsi[7].d || *(rsi[6] + (rax_3 << 3)) != rax_2 + 0x30)
                                    rsi = nullptr
                        
                        if ((1 & sub_140b5b8a0(0, 0)) != 0)
                            sub_140d19010(arg1, 
                                NewObject with empty name can't be used to create default subobjects "
                            "(inside of UObject derived class constructor) as it produces 
                                    incon")
                        
                        void* rax_6 = sub_140d2dfc0(rsi, arg1, 0, 0, 0, 0, 0, 0, 0)
                        arg1[0x67] = rax_6
                        int64_t rdx_4 = *rax_6
                        return (*(rdx_4 + 0x3f0))(rax_6, rdx_4)
                else if (arg2 != 0)
                    goto label_14225dc54

return result
