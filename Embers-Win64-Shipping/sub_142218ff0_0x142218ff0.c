// 函数: sub_142218ff0
// 地址: 0x142218ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x258)
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_14256a090()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f511e0 s> *rdi_1)
    _Init_thread_header(&data_143f511e0)
    
    if (data_143f511e0 == 0xffffffff)
        sub_140b58260(&data_143f511d8, u"FreeCam", 1)
        _Init_thread_footer(&data_143f511e0)

if (data_143f511f0 s> *rdi_1)
    _Init_thread_header(&data_143f511f0)
    
    if (data_143f511f0 == 0xffffffff)
        sub_140b58260(&data_143f511e8, u"FreeCam_Default", 1)
        _Init_thread_footer(&data_143f511f0)

uint64_t result

if (rbx != 0)
    result = *(rbx + 0x2b8)
    
    if (result != 0)
        result = *(result + 0x230)
        
        if (result == data_143f511d8 || result == data_143f511e8)
            result.b = 1
            return result

result.b = 0
return result
