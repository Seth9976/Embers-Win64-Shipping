// 函数: sub_14228ef00
// 地址: 0x14228ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* rbp = arg3
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143f53318 s> result.d)
    result, arg3 = _Init_thread_header(&data_143f53318)
    
    if (data_143f53318 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        arg3.b = 1
        int64_t* rax_12 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.AllowStaticLighting", arg3)
        int64_t rax_10
        
        if (rax_12 == 0)
            rax_10 = 0
        else
            int64_t rdx_3 = *rax_12
            rax_10 = (*(rdx_3 + 0x58))(rax_12, rdx_3)
        
        data_143f53310 = rax_10
        result, arg3 = _Init_thread_footer(&data_143f53318)

int64_t rdi = data_143f53310
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    result, arg3 = GetCurrentThreadId()
    rcx.b = result.d != data_143de5470

if (*(rdi + (rcx << 2)) != 0)
    char* rcx_1 = data_143f56338
    
    if (rcx_1 != 0)
        arg3.b = 1
        result = sub_1422ef960(rcx_1, 0, arg3.b)
    
    if (rbp != 0)
        int128_t var_58 = *arg4
        result = sub_1420fa400(rbp, &var_58)
        
        if (result != 0 && arg2 != 0)
            arg1[1].b = 1
            uint64_t result_1 = result
            
            if (sub_140a80f40() == 0)
                uint32_t rax_6
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_6.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
                    void var_30
                    void** rax_7 = sub_142297280(&var_30, nullptr, 0xff)
                    void* rcx_7 = *rax_7
                    *(rcx_7 + 0x10) = arg1.o
                    *(rcx_7 + 0x20) = arg2
                    void* rcx_8 = *rax_7
                    int32_t r8 = rax_7[2].d
                    int64_t* rdx_1 = rax_7[1]
                    int64_t* rbx = *(rcx_8 + 0x30)
                    int64_t* var_88_1 = rbx
                    int32_t* rdi_2 = &rbx[9]
                    
                    if (rbx != 0)
                        *rdi_2 += 1
                        rbx = var_88_1
                    
                    sub_140778000(rcx_8, rdx_1, r8, 1)
                    
                    if (rbx != 0)
                        int32_t rax_8 = *rdi_2
                        *rdi_2 -= 1
                        
                        if (rax_8 == 1)
                            sub_140a2f6e0(var_88_1)
                else
                    int128_t var_48 = arg1.o
                    int64_t* var_38_1 = arg2
                    sub_14228d190(&var_48, &data_143f02b98)
            else
                *arg1 = result
                *(result + 0xc) = (arg2[1].d).b
                *(*arg1 + 0x70) = 0
                uint64_t rcx_3 = *arg1
                *(rcx_3 + 0xb8) = 0
                void* rax_4 = rcx_3 + 0x128
                
                do
                    *(rax_4 - 0x38) = 0
                    i += 6
                    *rax_4 = 0
                    *(rax_4 + 0x38) = 0
                    *(rax_4 + 0x70) = 0
                    *(rax_4 + 0xa8) = 0
                    *(rax_4 + 0xe0) = 0
                    rax_4 += 0x150
                while (i u< 6)
                
                *(rcx_3 + 0x240) = 0
                *(rcx_3 + 0x278) = 0
                
                if (arg2[1].d s>= 3)
                    uint64_t rcx_4 = *arg1
                    (*(*rcx_4 + 0x28))(rcx_4)
            
            return (*(*arg2 + 0x130))(arg2, arg1, zx.q(arg5))

return result
