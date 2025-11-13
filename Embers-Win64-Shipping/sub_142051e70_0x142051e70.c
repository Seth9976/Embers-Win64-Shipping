// 函数: sub_142051e70
// 地址: 0x142051e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(data_143de5480)
int64_t rdi = data_143f40f68
int64_t rcx

if (result.b == 0)
    rcx = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx.b = cond:0_1

int64_t rdi_1 = data_143f41158
int32_t rbx
rbx.b = *(rdi + (rcx << 2)) != 0
int64_t rcx_1

if (result.b == 0)
    rcx_1 = 0
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx_1.b = cond:1_1

uint32_t result_1 = *(rdi_1 + (rcx_1 << 2))
int64_t rdi_2 = data_143f411b0
int64_t rcx_2

if (result.b == 0)
    rcx_2 = 0
else
    bool cond:3_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx_2.b = cond:3_1

int128_t zmm6 = *(rdi_2 + (rcx_2 << 2))
int64_t rdi_3 = data_143f41180
int64_t rcx_3

if (result.b == 0)
    rcx_3 = 0
else
    result = GetCurrentThreadId()
    rcx_3.b = result != data_143de5470

int32_t rdi_4 = int.d(fconvert.t(*(rdi_3 + (rcx_3 << 2))))

if (data_143f40a38 == 0)
    rbx = 0
    result_1 = 0

if (rbx != data_143a2e1b8 || result_1 != data_143a2e214 || zmm6.d f!= data_143a2e260
        || rdi_4 != data_143a2e25c)
    int32_t var_50_1 = zmm6.d
    
    if (sub_140a80f40() == 0)
        uint32_t rax_4
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
            void var_38
            void** rax_6 = sub_1420540f0(&var_38, nullptr, 0xff)
            *(*rax_6 + 0x10) = result_1.o
            void* rcx_8 = *rax_6
            int32_t r8_1 = rax_6[2].d
            int64_t* rdx_1 = rax_6[1]
            int64_t* rbx_1 = *(rcx_8 + 0x28)
            int64_t* arg_10 = rbx_1
            void* rdi_5 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_5 += 1
                rbx_1 = arg_10
            
            result = sub_1405e48c0(rcx_8, rdx_1, r8_1, 1)
            
            if (rbx_1 != 0)
                result = *rdi_5
                *rdi_5 -= 1
                
                if (result == 1)
                    return sub_140a2f6e0(arg_10)
        else
            uint32_t rcx_5 = 1
            data_143a2e1b8 = rbx
            
            if (rdi_4 s>= 1)
                rcx_5 = rdi_4
            
            result = result_1
            data_143f43548 += 1
            data_143a2e25c = rcx_5
            data_143a2e260 = zmm6.d
            data_143a2e214 = result
    else
        result = sub_1419a2d00()
        int32_t rcx_4 = 1
        data_143a2e260 = zmm6.d
        data_143a2e1b8 = rbx
        data_143a2e214 = result_1
        
        if (rdi_4 s>= 1)
            rcx_4 = rdi_4
        
        data_143f43548 += 1
        data_143a2e25c = rcx_4

return result
