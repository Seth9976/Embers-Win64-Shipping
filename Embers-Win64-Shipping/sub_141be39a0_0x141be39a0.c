// 函数: sub_141be39a0
// 地址: 0x141be39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_141c18780()
void* r8 = arg2[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t var_28
sub_141baf8d0(&var_28, arg2, r8, arg1 + 8, 0)
TEB* gsbase
int32_t* rsi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f315d8 s> *rsi_3)
    _Init_thread_header(&data_143f315d8)
    
    if (data_143f315d8 == 0xffffffff)
        sub_140b58170(&data_143f315d0, "SlateFontInfo", 1)
        _Init_thread_footer(&data_143f315d8)

void* var_20

if (var_28 == data_143f315d0)
    *(var_20 + 8) = arg3
else
    if (data_143f315c8 s> *rsi_3)
        _Init_thread_header(&data_143f315c8)
        
        if (data_143f315c8 == 0xffffffff)
            sub_140b58170(&data_143f315c0, "SlateBrush", 1)
            _Init_thread_footer(&data_143f315c8)
    
    if (var_28 != data_143f315c0)
        if (data_143f315e8 s> *rsi_3)
            _Init_thread_header(&data_143f315e8)
            
            if (data_143f315e8 == 0xffffffff)
                sub_140b58170(&data_143f315e0, "FontOutlineSettings", 1)
                _Init_thread_footer(&data_143f315e8)
        
        if (var_28 == data_143f315e0)
            *(var_20 + 8) = arg3
    else
        sub_140e24dd0(var_20, arg3)
int64_t* var_18
sub_141bab3c0(arg2, &var_18)
int64_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140e19ef0(rcx_5, 5)
    (*(*arg2 + 0x298))(arg2)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
