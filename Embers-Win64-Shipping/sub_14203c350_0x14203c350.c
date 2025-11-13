// 函数: sub_14203c350
// 地址: 0x14203c350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg1, 1)
int64_t result

if (rax == 0)
    result = 0
else
    result = *(rax + 0x188)

if (result != 0)
    for (int64_t* i = *(result + 0x38); i != &i[sx.q(*(result + 0x40))]; i = &i[1])
        void* r9_1 = *i
        
        if (r9_1 != 0)
            int64_t* r9_2 = *(r9_1 + 0x30)
            
            if (r9_2 != 0)
                int64_t rax_1 = *r9_2
                int64_t var_18 = 0
                int32_t var_10 = 0
                return (*(rax_1 + 0xa68))(r9_2, zx.q(arg2), &var_18)

result.b = 0
return result
