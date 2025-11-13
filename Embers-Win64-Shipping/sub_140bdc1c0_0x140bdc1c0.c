// 函数: sub_140bdc1c0
// 地址: 0x140bdc1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = sub_140d3b5d0(arg1, arg2, arg3)
void* result = result_1

if (result_1 == 0)
    int32_t arg_c = result_1.d
    int64_t rdx = arg3.d.q
    
    if (rdx != arg3)
        void** r8 = *(arg1 + 0x270)
        void* r11_1 = &r8[sx.q(*(arg1 + 0x278))]
        
        if (r8 == r11_1)
        label_140bdc258:
            result = nullptr
        else
            while (true)
                result = *r8
                int64_t rax
                int64_t rcx
                
                if (result != 0 && *(result + 0x18) == rdx)
                    rax = *(result + 0x10)
                    rcx = sx.q(*(arg2 + 0x38))
                
                if (result == 0 || *(result + 0x18) != rdx || rcx.d s> *(rax + 0x38)
                        || *(*(rax + 0x30) + (rcx << 3)) != arg2 + 0x30)
                    rax.b = 0
                else
                    rax.b = 1
                
                if (rax.b != 0)
                    break
                
                r8 = &r8[1]
                
                if (r8 == r11_1)
                    goto label_140bdc258_1
            
            if (r8 == 0)
            label_140bdc258_1:
                result = nullptr

int64_t* rcx_1 = *(arg1 + 0x40)

if (result != 0)
    return result

if (rcx_1 == 0)
    return 0

return (*(*rcx_1 + 0x370))(rcx_1, arg2, arg3, result)
