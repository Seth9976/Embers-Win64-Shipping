// 函数: sub_14118ce10
// 地址: 0x14118ce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = data_143e6d188

for (void* rcx_1 = sx.q(data_143e6d190) * 0x160 + i; i != rcx_1; i = &i[0x58])
    if (*i == arg2)
        *arg1 = 0
        int64_t rsi = *(i + 0x48)
        int64_t rdi = sx.q(i[0x14])
        arg1[1].d = rdi.d
        
        if (rdi.d == 0)
            *(arg1 + 0xc) = 0
            return arg1
        
        sub_140808f70(arg1, rdi.d, 0)
        memcpy(*arg1, rsi, (rdi * 0x18).d)
        return arg1

*arg1 = 0
arg1[1] = 0
return arg1
