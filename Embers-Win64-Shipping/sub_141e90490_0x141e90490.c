// 函数: sub_141e90490
// 地址: 0x141e90490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = 0
arg1[1] = 0
TEB* gsbase

if (data_143f3a3c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a3c8)
    
    if (data_143f3a3c8 == 0xffffffff)
        sub_140b58260(&data_143f3a3c0, u"CameraPhotography", 1)
        _Init_thread_footer(&data_143f3a3c8)

int64_t rbx = data_143f3a3c0
sub_140a387e0()
int16_t* var_48 = nullptr
int32_t var_3c = 0
int16_t* rbp = nullptr
int32_t r12 = 0
int32_t r13 = 0
int64_t rax_3 = (*(data_14399e720 + 8))(&data_14399e720, rbx)
int32_t i = 0
int32_t var_40

if (rax_3.d s> 0)
    int16_t* rsi = nullptr
    
    do
        int64_t rax_5 = (*(data_14399e720 + 0x10))(&data_14399e720, rbx, zx.q(i))
        int64_t rbp_1 = rax_5 - 8
        
        if (rax_5 == 0)
            rbp_1 = 0
        
        int64_t rdi_1 = sx.q(r12)
        r12 = (rdi_1 + 1).d
        var_40 = r12
        
        if (r12 s> r13)
            sub_1405a4d70(&var_48)
            r13 = var_3c
            r12 = var_40
            rsi = var_48
        
        i += 1
        *(rsi + (rdi_1 << 3)) = rbp_1
    while (i s< rax_3.d)
    
    result = arg1
    rbp = var_48

int32_t rdi_2 = 0

while (true)
    int64_t* rcx_1
    
    if (rdi_2 s< 0 || rdi_2 s>= r12)
        rcx_1 = *result
        
        if (rcx_1 == 0)
            rax_3.b = 0
            break
    else
        rcx_1 = *result
        
        if (rcx_1 == 0)
            int64_t* rcx_2 = *(rbp + (sx.q(rdi_2) << 3))
            rax_3 = (*(*rcx_2 + 0x40))(rcx_2, &var_48)
            int64_t rcx_3 = rax_3
            
            if (result != rax_3)
                *result = *rax_3
                *rcx_3 = 0
                rax_3 = *(rcx_3 + 8)
                int64_t* rbx_1 = result[1]
                
                if (rax_3 != rbx_1)
                    *(rcx_3 + 8) = 0
                    result[1] = rax_3
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp3_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rbx_2 = var_40.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 += 1
            continue
    
    rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
    break

int64_t* rbx_3 = data_143f3a268
int32_t r15
r15.b = rax_3.b != 0
sub_140a2e390(&var_48, u"%d", zx.q(r15))
int16_t* const rdx_5 = &data_142d40450

if (var_40 != 0)
    rdx_5 = var_48

(*(*rbx_3 + 0x80))(rbx_3, rdx_5, 0x8000000)
int16_t* rcx_10 = var_48

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (rbp != 0)
    sub_140a74f90(rbp)

return result
