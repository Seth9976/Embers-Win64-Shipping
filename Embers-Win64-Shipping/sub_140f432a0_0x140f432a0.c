// 函数: sub_140f432a0
// 地址: 0x140f432a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rbp = *(arg1 + 0x2c8)
int128_t zmm7 = arg2
char rax_2
int64_t* rdx
rax_2, rdx = sub_140f43d20(arg1)
int32_t var_54
int128_t zmm6

if (rax_2 != 0 || *(arg1 + 0x408) == rax_2)
    arg3, zmm6, zmm7 = sub_140e25880(rbp, zmm7, arg4)
    int64_t* rax_3 = sub_140e13cf0(rbp, &var_54)
    
    if (rax_3 != arg1 + 0x448)
        if (*(arg1 + 0x450) != 0)
            *(arg1 + 0x450) = 0
        
        *(arg1 + 0x448) = *rax_3
        *(arg1 + 0x450) = 1
else if (*(arg1 + 0x450) != rax_2)
    *(arg1 + 0x450) = rax_2

int64_t rdi
rdi.b = 0
int128_t var_28 = zmm6

if (rax_2 == 0)
    TEB* gsbase
    
    if (data_143e2ad80
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2ad80)
        
        if (data_143e2ad80 == 0xffffffff)
            sub_140d921c0(&data_143e2ad48)
            _Init_thread_footer(&data_143e2ad80)
    
    int128_t zmm0_2
    zmm0_2, zmm7 = sub_140f2ded0(arg1, &data_143e2ad48, arg3)
    zmm6 = zmm0_2
    rdi.b = 1
    goto label_140f433cd

char rsi = 0

if (*(arg1 + 0x408) == 0)
    zmm6 = var_54
else
    int128_t zmm0_1
    zmm0_1, rdx, zmm7 = sub_140f2ded0(arg1, arg1 + 0x40c, arg3)
    rdi.b = 1
    zmm6 = zmm0_1
    rsi = 1

rdx.b = 1
sub_140e19ef0(rbp, rdx.b)
sub_140e1a0f0(rbp)

if (rsi != 0)
label_140f433cd:
    char var_58_1 = 0
    
    if (*(arg1 + 0x3d9) != 0)
        if (*(arg1 + 0x3e8) != 0)
            int64_t* rcx_9 = *(arg1 + 0x3e0)
            
            if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
                int64_t* rcx_10
                
                if (*(arg1 + 0x3e8) == 0)
                    rcx_10 = nullptr
                else
                    rcx_10 = *(arg1 + 0x3e0)
                
                *(arg1 + 0x3d8) = (*(*rcx_10 + 0x48))(rcx_10)
        
        if (*(arg1 + 0x3d8) != 0 && not(zmm7.d f== zx.o(0).d))
            zmm6.d = zmm6.d f/ zmm7.d
            rdi.b = 1

int32_t* result

if (&var_54 == arg1 + 0x454)
    result.b = 1
else
    if (*(arg1 + 0x458) != 0)
        *(arg1 + 0x458) = 0
    
    result.b = 1
    
    if (rdi.b != 0)
        *(arg1 + 0x454) = zmm6.d
        *(arg1 + 0x458) = 1

__security_check_cookie(rax_1 ^ &var_78)
return result
