// 函数: sub_141a10340
// 地址: 0x141a10340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_1439cbf7c
int128_t zmm6 = data_1439cbf8c
int32_t rax

if (rcx s>= 1)
    rax = 0x3c
    
    if (rcx s< 0x3c)
        rax = rcx
else
    rax = 1

uint64_t rcx_1 = zx.q(data_14401b1a0)
int128_t zmm7 = data_1439cbf90
data_1439cbf58 = rax
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (rcx_1 << 3))

if (data_143f287d0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f287d0)
    
    if (data_143f287d0 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        data_143f287c8 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.DetailMode", r8_5)
        _Init_thread_footer(&data_143f287d0)

uint64_t rdi = 0

if (data_143f287d8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f287d8)
    
    if (data_143f287d8 == 0xffffffff)
        int64_t* rcx_11 = data_143f287c8
        int32_t rax_6
        
        if (rcx_11 == 0)
            rax_6 = 0
        else
            rax_6 = (*(*rcx_11 + 0x90))(rcx_11)
        
        data_143f287d4 = rax_6
        _Init_thread_footer(&data_143f287d8)

int64_t* rcx_2 = data_143f287c8
void* result

if (rcx_2 == 0)
    result = nullptr
else
    result = (*(*rcx_2 + 0x90))(rcx_2)

if (result.d != data_143f287d4 || zmm6.d f!= data_1439cbfa4 || not(zmm7.d f== data_1439cbfa8))
    data_1439cbfa4 = zmm6.d
    data_1439cbfa8 = zmm7.d
    data_143f287d4 = result.d
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    int32_t var_48_1 = 0xffffffff
    result = sub_140d3cc80(sub_141a23150(), &var_58, 1, 0x30, 0x20000000)
    int64_t rbp_1 = sx.q(var_50_1)
    int32_t i = var_48_1 + 1
    int64_t r14_1 = var_58
    int32_t i_1 = i
    
    if (i s< rbp_1.d)
        result = zx.q(i)
        
        do
            result = sx.q(result.d)
            
            if (*(r14_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i + 1)
            i_1 = result.d
            i = result.d
        while (result.d s< rbp_1.d)
    
    uint64_t var_40 = 0
    int32_t j = rbp_1.d
    int32_t j_1 = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a00(&var_40, rbp_1.d, 0)
        rdi = var_40
        result = memcpy(rdi, r14_1, (rbp_1 << 3).d)
        i = i_1
        rbp_1 = zx.q(var_50_1)
        r14_1 = var_58
        j = j_1
    
    if (i != rbp_1.d)
        do
            sub_141a0a830(*(rdi + (sx.q(i) << 3)), nullptr)
            result = zx.q(i + 1)
            i = result.d
            
            while (result.d s< j)
                result = sx.q(i)
                
                if (*(rdi + (result << 3)) != 0)
                    break
                
                result = zx.q(i + 1)
                i = result.d
        while (i != rbp_1.d)
        
        r14_1 = var_58
    
    if (rdi != 0)
        result = sub_140a74f90(rdi)
        r14_1 = var_58
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
