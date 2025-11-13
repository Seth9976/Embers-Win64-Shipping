// 函数: sub_1409559e0
// 地址: 0x1409559e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
(*(*arg1 + 0x2a0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    (*(*rcx + 0x290))(rcx, &arg1[0x19])

TEB* gsbase

if (data_143cecf88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf88)
    
    if (data_143cecf88 == 0xffffffff)
        sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf88)

int64_t rbx = data_143cecf80
j_sub_140b3db50()
int64_t* rax_4 = sub_140b3da90(&data_143de7d78, rbx)
int64_t r8 = *rax_4
int64_t* result = (*(r8 + 0x50))(rax_4, 0, r8)

if (result != 0)
    int64_t r8_1 = *result
    result = (*(r8_1 + 0x1c0))(result, &arg1[0x16], r8_1)

int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
