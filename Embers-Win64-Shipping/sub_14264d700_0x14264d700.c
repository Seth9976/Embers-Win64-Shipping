// 函数: sub_14264d700
// 地址: 0x14264d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg1 + 0x40)
uint64_t result_3 = result

if (result != 0)
label_14264d793:
    void* rax_2 = sub_140bdf2e0()
    void* rdx_2 = *(result_3 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_2 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_2 + 0x30)
            result = sub_14269bff0()
            
            if (result != 0)
                int64_t rdx_3 = result + 0x30
                result = sx.q(*(result + 0x38))
                
                if (result.d s<= *(result_3 + 0x38))
                    uint64_t result_2 = result
                    result = *(result_3 + 0x30)
                    
                    if (*(result + (result_2 << 3)) == rdx_3)
                        if ((sub_140b5b8a0(0, 0) & 1) != 0)
                            sub_140d19010(arg1, 
                                NewObject with empty name can't be used to create default subobjects "
                            "(inside of UObject derived class constructor) as it produces 
                                    incon")
                        
                        return sub_1426683d0(arg1, 
                            sub_140d2dfc0(result_3, arg1, 0, 0, 0, 0, 0, 0, 0))
else if (*(arg1 + 0x50) != 0)
    if (result.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        result = zx.q(data_1439aaa30)
    
    if (result.d != *(arg1 + 0x48) || *(arg1 + 0x40) != 0xffffffff)
        void* rax = sub_140d2bce0(arg1 + 0x50)
        sub_140d3a3a0(arg1 + 0x40, rax)
        
        if (rax != 0 || data_143e1d7b4 == 0)
            int32_t rax_1 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_1 = data_1439aaa30
            
            *(arg1 + 0x48) = rax_1
        
        result = sub_140d3c6e0(arg1 + 0x40)
        result_3 = result
        
        if (result != 0)
            goto label_14264d793

return result
