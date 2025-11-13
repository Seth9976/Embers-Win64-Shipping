// 函数: sub_141ee50a0
// 地址: 0x141ee50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    void* rax_1 = sub_14247bf70()
    void* rcx = rbx[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        (*(*rbx + 0x398))(rbx, arg2)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_2 = zx.q(data_14401b1a0)
int64_t var_28 = 0
char var_20 = 1
int32_t* rbx_2 = *(ThreadLocalStoragePointer + (rcx_2 << 3)) + 0x14

if (data_143f3ac3c s> *rbx_2)
    _Init_thread_header(&data_143f3ac3c)
    
    if (data_143f3ac3c == 0xffffffff)
        sub_142459c10()
        sub_142459c10()
        data_143f3ac38 = 1
        _Init_thread_footer(&data_143f3ac3c)

int32_t var_10 = 1
wchar16 const* const var_18 = u"bIsActive"
int32_t var_c = 1
sub_14241d9c0(&var_18, arg2, &var_28)

if (data_143f3ac44 s> *rbx_2)
    _Init_thread_header(&data_143f3ac44)
    
    if (data_143f3ac44 == 0xffffffff)
        sub_142459c10()
        sub_142459c10()
        data_143f3ac40 = 1
        _Init_thread_footer(&data_143f3ac44)

int32_t var_10_1 = 0
var_18 = u"bReplicates"
int32_t var_c_1 = 1
return sub_14241d9c0(&var_18, arg2, &var_28)
