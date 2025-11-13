// 函数: sub_142117840
// 地址: 0x142117840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
TEB* gsbase
void* result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cd80cc s> *(0x14 + result))
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    void** r12_1 = &arg1[0x4a]
    int32_t i = 0
    wchar32* r15_1 = U"1111"
    
    do
        void* var_40_1 = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 3
        void var_48
        sub_142110080(arg1, &var_48, *r15_1)
        int32_t j = 0
        int64_t r14_1 = 0
        void** rbx_1 = r12_1
        
        do
            result = *rbx_1
            
            if (result == 0)
                result = (*(*arg1 + 0x470))(arg1)
                *rbx_1 = result
            
            void* rdx_3 = &var_48
            
            if (var_40_1 != 0)
                rdx_3 = var_40_1
            
            rbx_1 = &rbx_1[4]
            uint32_t rcx_3 = zx.d(*(rdx_3 + r14_1))
            r14_1 += 1
            *(result + 0x20) &= 0xfffffffe
            *(result + 0x20) |= rcx_3 & 1
            *(result + 0x18) = j
            j += 1
            *(result + 0x28) = arg1
            *(result + 0x30) = 0
            *(result + 0x1c) = i
        while (j s< 3)
        
        if (var_40_1 != 0)
            result = sub_140a74f90(var_40_1)
        
        i += 1
        r12_1 = &r12_1[1]
        r15_1 = &r15_1[1]
    while (i s< 4)

__security_check_cookie(rax_1 ^ &var_68)
return result
