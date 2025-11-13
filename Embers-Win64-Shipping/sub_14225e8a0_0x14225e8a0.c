// 函数: sub_14225e8a0
// 地址: 0x14225e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if (arg2 == 0)
    rdi = nullptr
else
    void* rax_1 = sub_142486410()
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rdi[7].d || *(rdi[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rdi = nullptr

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(rdi, arg1, 0, 0, 0, 0, 0, 0, 0)

if (result != 0)
    int64_t r8_1 = *arg1
    
    if ((*(r8_1 + 0x6a8))(arg1, result, r8_1) == 1)
        return result

return nullptr
