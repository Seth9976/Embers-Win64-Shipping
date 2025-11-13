// 函数: sub_140a540b0
// 地址: 0x140a540b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_fa8
int64_t rax_1 = __security_cookie ^ &var_fa8
void var_368
memset(&var_368, 0, 0x320)
uint64_t result = sub_140b65640(&var_368, 0x64, arg4)
uint64_t rdx = zx.q(arg3 + 2)

if (arg4 != 0)
    rdx = zx.q(arg3)

if (rdx.d u< result.d)
    void* r14_1 = &var_368 + (rdx << 3)
    uint64_t i_1 = zx.q(result.d - rdx.d)
    uint64_t i
    
    do
        uint64_t rbx_1 = *r14_1
        
        if (arg1 != 0 && arg2 != 0)
            int64_t var_388
            __builtin_memset(&var_388, 0, 0x18)
            char _Destination[0x3ff]
            strncpy(&_Destination, &data_1437020ab, 0x400)
            char var_b89_1 = 0
            char _Destination_1[0x3ff]
            strncpy(&_Destination_1, &data_1437020ab, 0x400)
            char var_789_1 = 0
            char _Destination_2[0x3ff]
            strncpy(&_Destination_2, &data_1437020ab, 0x400)
            char var_389_1 = 0
            sub_140b71650(rbx_1, &_Destination)
            sub_140a548a0(&_Destination, arg1, arg2)
        
        result = -1
        
        do
            result += 1
        while (arg1[result] != 0)
        
        void* _Destination_3 = &arg1[sx.q(result.d)]
        int32_t _Count_1 = arg2.d - result.d
        
        if (_Count_1 s> 0)
            uint64_t _Count = sx.q(_Count_1)
            result = strncpy(_Destination_3, "\r\n", _Count)
            *(_Count + _Destination_3 - 1) = 0
        
        r14_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_fa8)
return result
