// 函数: sub_142815c60
// 地址: 0x142815c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (arg3 s> *arg4)
    *arg4 = arg3

int32_t result = *(arg2 + 0x38)
uint64_t rbx = 0

if (result != 0)
    while (true)
        int32_t r11_1 = arg1[5].d
        void* rax_1 = *(arg2 + 0x30) + rbx * 0x28
        uint64_t r9 = 0
        
        if (r11_1 == 0)
        label_142815d18:
            sub_142817350(*arg1, 0x20, 
                "PxBinaryConverter: Can't find class %s metadata, please check the source metadata.\n", 
                *(rax_1 + 8))
            result.b = 0
            return result
        
        void* i_2
        
        while (true)
            i_2 = *(arg1[4] + (r9 << 3))
            char* rax_2 = *(i_2 + 0x20)
            void* r8_1 = *(rax_1 + 8) - rax_2
            uint32_t i
            uint32_t rdx
            
            do
                rdx = zx.d(*rax_2)
                i = zx.d(*(rax_2 + r8_1))
                
                if (rdx != i)
                    break
                
                rax_2 = &rax_2[1]
            while (i != 0)
            
            if (rdx - i == 0)
                break
            
            r9 = zx.q(r9.d + 1)
            
            if (r9.d u>= r11_1)
                goto label_142815d18
        
        for (void* i_1 = *(i_2 + 0x18); i_1 != 0; i_1 = *(i_1 + 0x18))
            i_2 = i_1
        
        if (sub_142815c60(arg1, i_2, zx.q(arg3 + 1), arg4, result, rax_1).b == 0)
            result.b = 0
            return result
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d u>= result)
            break
        
        arg2 = arg_10

result.b = 1
return result
