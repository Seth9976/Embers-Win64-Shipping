// 函数: sub_140b74c70
// 地址: 0x140b74c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int128_t* result = nullptr

if ((*(rax + 0x70))(arg1, &result) != 0)
    return result

void* var_18
TEB* gsbase

if (data_143e19ea8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19ea8)
    
    if (data_143e19ea8 == 0xffffffff)
        void*** rax_7 = sub_140666cd0()
        var_18 = &rax_7[2]
        uint128_t zmm0_1 = var_18.o
        data_143e19e98 = zmm0_1
        void* rax_8 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
            
            if (rax_7 != 0)
                rax_7[1].d -= 1
                
                if (rax_7[1].d == 1)
                    (**rax_7)(rax_7)
                    int32_t temp1_1 = *(rax_7 + 0xc)
                    *(rax_7 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*rax_7)[1](rax_7, 1)
        
        atexit(sub_142cc0e10)
        _Init_thread_footer(&data_143e19ea8)

var_18 = nullptr
result = &data_143e19e98
int32_t var_10_1 = 0
sub_1405947f0(&var_18, 7)
int32_t rax_4 = var_10_1 + 7
var_10_1 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_18)

void* rbx_1 = var_18
UnDecorator::getReferenceType(rbx_1, u"Object", 0xe)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return result
