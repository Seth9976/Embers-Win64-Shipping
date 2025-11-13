// 函数: sub_141325d40
// 地址: 0x141325d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
char rcx = (*(rax + 0x28)).b
int64_t rsi

if ((rcx & 0x20) == 0 || (*(rax + 0x2c) & 0x20) == 0 || (rcx & 1) == 0 || *(rax + 0x43) == 0)
    rsi.b = 0
else
    rsi.b = 1

*(arg1 + 0x420) = 0x3f800000
*(arg1 + 0x424) = 0
uint64_t rbp
rbp.b = 1
int32_t rax_1 = sub_1422e5a30(arg2)
int64_t rax_2

if (rax_1 u> 0x1e || not(test_bit(0x6562c800, rax_1)))
    rax_2 = sx.q(rax_1)

int128_t zmm6

if ((rax_1 u<= 0x1e && test_bit(0x6562c800, rax_1)) || (*(&data_143f025fc + rax_2 * 0x14) & 1) != 0)
    rbp.b = zx.b(sub_14135d220(arg2)) & 1
    int32_t var_78
    zmm6 = sub_1413138f0(&var_78, arg2, 1)
    float var_70
    float var_6c
    float var_68
    *(arg1 + 0x420) =
        var_68 * 0.180000007f / __maxss_xmmss_memss((var_6c + var_70) * 0.5f, 0x38d1b717)

if (rsi.b != 0 && rbp.b != 0)
    int64_t rsi_1 = 0
    TEB* gsbase
    
    if (data_143eb80b0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143eb80b0)
        
        if (data_143eb80b0 == 0xffffffff)
            int64_t* rcx_7 = data_143db18d0
            
            if (rcx_7 == 0)
                sub_140a53c40()
                rcx_7 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_9 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.UsePreExposure", r8_1)
            int64_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0
            else
                int64_t rdx_2 = *rax_9
                rax_10 = (*(rdx_2 + 0x58))(rax_9, rdx_2)
            
            data_143eb80a8 = rax_10
            _Init_thread_footer(&data_143eb80b0)
    
    int64_t rbp_1 = data_143eb80a8
    
    if (data_143de5480 != 0)
        rsi_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbp_1 + (rsi_1 << 2)) == 0)
        if (arg2[0x220] != 0)
            *(arg1 + 0x424) = 1
        
        *(arg1 + 0x420) = 0x3f800000
    else
        int128_t var_18_1 = zmm6
        zmm6 = *(data_143eb3f98 + 4)
        int32_t zmm0_2 = sub_14141f680(arg2)
        
        if (zmm6.d f<= 0f)
            if (not(zmm0_2 f<= 0f))
                *(arg1 + 0x420) = zmm0_2
            
            *(arg1 + 0x424) = 1
        else
            *(arg1 + 0x420) = zmm6.d
            *(arg1 + 0x424) = 1

int32_t result = *(arg1 + 0x420)
bool cond:0 = (*(arg2 + 0x497c) & 1) != 0
*(arg2 + 0x4fd4) = result

if (not(cond:0))
    result = *(arg1 + 0x420)
    *(arg1 + 0x880) = result

return result
