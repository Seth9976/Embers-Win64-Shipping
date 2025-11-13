// 函数: sub_14265daf0
// 地址: 0x14265daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (0f f> *(arg1 + 4) || 0f f> *(arg1 + 8))
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x50)
    uint64_t result_1 = result
    
    if (result != 0)
    label_14265db98:
        void* rax_2 = sub_140bdf2e0()
        void* rdx_2 = *(result_1 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_2 + 0x30)
            result = sub_142452380()
            
            if (result != 0)
                int64_t rdx_3 = result + 0x30
                result = sx.q(*(result + 0x38))
                
                if (result.d s<= *(result_1 + 0x38)
                        && *(*(result_1 + 0x30) + (result << 3)) == rdx_3)
                    result.b = 1
                    return result
    else if (*(arg1 + 0x60) != result)
        if (result.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            result = zx.q(data_1439aaa30)
        
        if (result.d != *(arg1 + 0x58) || *(arg1 + 0x50) != 0xffffffff)
            void* rax = sub_140d2bce0(arg1 + 0x60)
            sub_140d3a3a0(arg1 + 0x50, rax)
            
            if (rax != 0 || data_143e1d7b4 == 0)
                int32_t rax_1 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_1 = data_1439aaa30
                
                *(arg1 + 0x58) = rax_1
            
            result = sub_140d3c6e0(arg1 + 0x50)
            result_1 = result
            
            if (result != 0)
                goto label_14265db98

result.b = 0
return result
