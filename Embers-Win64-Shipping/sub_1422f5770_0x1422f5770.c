// 函数: sub_1422f5770
// 地址: 0x1422f5770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
void var_588
sub_1405af800(&arg1[0x1bc], sub_1422d7fd0(&var_588))
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

*(arg1 + 0x10cc) = 0
arg1[0x248].d = 0

if (*data_143f55718 == 0)
    arg1[0x1ff].d = 0

if (*data_143f557c8 == 0)
    *(arg1 + 0x11e4) = 0

if (*data_143f55928 != 0)
    int32_t rcx_4 = *data_143f55940
    
    if (rcx_4 u<= 2)
        *(arg1 + 0xe02) = rcx_4.b
else
    arg1[0x223].d = 0x3f800000
    *(arg1 + 0x111c) = 0x3f800000
    
    if (*data_143f55970 != 0)
        TEB* gsbase
        void* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        
        if (data_143cda914 s> *(rsi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        int64_t zmm0_1
        zmm0_1.d = data_143cda910.d f* -0.182321593f
        int128_t zmm6
        zmm6.d = (*(arg1 + 0x111c)).d f* 0.833333313f
        arg1[0x223].d = zmm0_1.d
        
        if (data_143cda914 s> *(rsi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        zmm0_1.d = logf(zmm6.q.d).d f* data_143cda910
        *(arg1 + 0x111c) = zmm0_1.d

if (*data_143f55988 == 0)
    *(arg1 + 0x1284) = 0

if (*data_143f559a0 == 0)
    *(arg1 + 0x1134) = 0

if (*data_143f55878 == 0)
    arg1[0x23d].d = 0

void* result = data_143f5b298
int64_t* rcx_5 = *(result + 0xaf8)

if (rcx_5 != 0)
    result = (*(*rcx_5 + 0xc8))(rcx_5, &arg1[0x1bc], zx.q(arg1[0x15a].d))

int64_t* rcx_6 = arg1[1]

if (rcx_6 != 0)
    result = (*(*rcx_6 + 0x20))(rcx_6, arg1)

void* rcx_7 = *arg1

if (rcx_7 != 0)
    int64_t* rcx_8 = *(rcx_7 + 0x20)
    
    if (rcx_8 != 0)
        result = (*(*rcx_8 + 0x240))(rcx_8)
        
        if (result != 0)
            int32_t var_590_1 = arg2[1].d
            int64_t var_598 = *arg2
            result = sub_14242c520(result, &var_598, arg1)

__security_check_cookie(rax_1 ^ &var_5b8)
return result
