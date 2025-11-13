// 函数: sub_1413df080
// 地址: 0x1413df080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de542c == 0)
    return 

TEB* gsbase
int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cd80cc s> *rbx_2)
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0)
    return 

if (data_143ec8310 s> *rbx_2)
    _Init_thread_header(&data_143ec8310)
    
    if (data_143ec8310 == 0xffffffff)
        data_143ec830c = *data_143ec9d48 != 0
        _Init_thread_footer(&data_143ec8310)

uint64_t rax
rax.b = *data_143ec9d48 != 0

if (rax.b == data_143ec830c)
    return 

data_143ec830c = rax.b
uint64_t var_38
sub_1413bdfa0(&var_38, 0x10, 1, 0)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int32_t var_30
    
    if (i s>= var_30)
        break
    
    void* rbx_3 = *(var_38 + (sx.q(i) << 3))
    
    if (rbx_3 != 0)
        int64_t rbx_4 = *(rbx_3 + 0x1b0)
        
        if (rbx_4 != 0)
            int64_t arg_8 = rbx_4
            
            if (sub_140a80f40() == 0)
                uint32_t rax_5
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_5.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
                    void var_20
                    int64_t* rax_6 = sub_1413dd940(&var_20, nullptr, 0xff)
                    *(*rax_6 + 0x10) = rbx_4
                    void* rcx_8 = *rax_6
                    int32_t r8_1 = rax_6[2].d
                    int64_t* rdx_1 = rax_6[1]
                    int64_t* rbx_5 = *(rcx_8 + 0x20)
                    int64_t* arg_10 = rbx_5
                    int32_t* rdi_1 = &rbx_5[9]
                    
                    if (rbx_5 != 0)
                        *rdi_1 += 1
                        rbx_5 = arg_10
                    
                    sub_1405a5630(rcx_8, rdx_1, r8_1, 1)
                    
                    if (rbx_5 != 0)
                        int32_t rax_7 = *rdi_1
                        *rdi_1 -= 1
                        
                        if (rax_7 == 1)
                            sub_140a2f6e0(arg_10)
                else
                    int64_t arg_18 = rbx_4
                    sub_1413ca240(&arg_18, &data_143f02b98)
            else
                sub_1413ca240(&arg_8, &data_143f02b98)
            
            i = i_1
    
    rax = zx.q(i + 1)
    i = rax.d
    i_1 = rax.d
    
    if (rax.d s< var_30)
        while (*(var_38 + (sx.q(i) << 3)) == 0)
            rax = zx.q(i + 1)
            i = rax.d
            i_1 = rax.d
            
            if (rax.d s>= var_30)
                break

uint64_t rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)
