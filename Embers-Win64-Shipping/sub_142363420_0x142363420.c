// 函数: sub_142363420
// 地址: 0x142363420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t arg_8 = arg1
int32_t i = 0
int64_t* rsi = arg4
int64_t* rbp = arg3
int64_t* r15 = arg2
uint64_t r12 = zx.q(arg1)
int32_t* rdx_2

if (arg2[1].d == *(arg2 + 0x34))
label_14236349e:
    rdx_2 = nullptr
else
    void* r10_1 = arg2[8]
    void* rbx_1 = &arg2[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    int32_t rax_2 = *(rbx_1 + (((sx.q(arg2[9].d) - 1) & sx.q(r12.d)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_14236349e_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_2) << 4) + *arg2
            
            if (*rdx_2 == r12.d)
                break
            
            rax_2 = rdx_2[2]
            
            if (rax_2 == 0xffffffff)
                goto label_14236349e_2
        
        if (rax_2 == 0xffffffff)
        label_14236349e_2:
            rdx_2 = nullptr

void* rax_3 = &rdx_2[1]

if (rdx_2 == 0)
    rax_3 = nullptr

if (rax_3 != 0)
    return zx.q(*rax_3)

if (arg4[1].d s> 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t r9 = r12
    int64_t r13_1 = 0
    int128_t zmm6
    int128_t var_58_1 = zmm6
    uint64_t r12_1 = zx.q(data_14401b1a0)
    int128_t zmm7
    int128_t var_68_1 = zmm7
    
    do
        int64_t rcx = *(arg6 + 0x68)
        uint64_t rdx_3 = zx.q(*(arg6 + 0x78))
        uint64_t i_1 = zx.q(i)
        
        if (*(arg6 + 0x80) == 0)
            int64_t rsi_3 = r9 * (rdx_3 << 2) + rcx
            uint32_t rbx_2 = zx.d(*(rsi_3 + (i_1 << 2) + 2))
            int32_t rdi_3 = (rbx_2 & 0xffff8000) << 0x10
            int16_t rax_9 = rbx_2.w & 0x7c00
            int32_t var_74_1
            int64_t zmm0
            
            if (rax_9 == 0)
                int32_t rbx_3 = rbx_2 & 0x3ff
                
                if (rbx_3 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_3))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    var_74_1 = (rbx_3 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_3
                else
                    var_74_1 = rdi_3
            else if (rax_9 != 0x7c00)
                var_74_1 = ((rbx_2 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_2 & 0x3ff) << 0xd | rdi_3
            else
                var_74_1 = rdi_3 | 0x477fe000
            
            uint32_t rbx_10 = zx.d(*(rsi_3 + (i_1 << 2)))
            int32_t rdi_7 = (rbx_10 & 0xffff8000) << 0x10
            int16_t rax_24 = rbx_10.w & 0x7c00
            int32_t var_78_1
            
            if (rax_24 == 0)
                int32_t rbx_11 = rbx_10 & 0x3ff
                
                if (rbx_11 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_11))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_78_1 = (rbx_11 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_7
                else
                    var_78_1 = rdi_7
            else if (rax_24 != 0x7c00)
                var_78_1 =
                    ((rbx_10 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_10 & 0x3ff) << 0xd | rdi_7
            else
                var_78_1 = rdi_7 | 0x477fe000
            
            zmm6 = var_78_1
            zmm7 = var_74_1
            rsi = arg4
        else
            int64_t rax_7 = r9 * rdx_3 + i_1
            zmm6 = *(rcx + (rax_7 << 3))
            zmm7 = *(rcx + (rax_7 << 3) + 4)
        
        int64_t* rbx_19 = *rsi + r13_1
        int64_t rdi_9 = sx.q(rbx_19[1].d)
        int32_t rax_39 = (rdi_9 + 1).d
        rbx_19[1].d = rax_39
        
        if (rax_39 s> *(rbx_19 + 0xc))
            sub_1405a4d70(rbx_19)
        
        int64_t rax_40 = *rbx_19
        i += 1
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        r13_1 += 0x10
        r9 = r12
        *(rax_40 + (rdi_9 << 3)) = zmm6.d
        *(rax_40 + (rdi_9 << 3) + 4) = zmm7.d
    while (i s< rsi[1].d)
    
    r12 = zx.q(arg_8)
    r15 = arg_10
    rbp = arg3

int64_t rbx_20 = sx.q(rbp[1].d)
int32_t rax_41 = (rbx_20 + 1).d
int64_t* rdi_12 = zx.q(*(arg5 + 0x30) * r12.d) + *(arg5 + 0x28)
rbp[1].d = rax_41

if (rax_41 s> *(rbp + 0xc))
    sub_140638a00(rbp)

int64_t rcx_6 = *rbp
int64_t rdx_8 = rbx_20 * 3
arg_10.d = rbx_20.d
*(rcx_6 + (rdx_8 << 2)) = *rdi_12
*(rcx_6 + (rdx_8 << 2) + 8) = rdi_12[1].d
sub_140908920(r15, &arg_8, &arg_10)
return zx.q(arg_10.d)
