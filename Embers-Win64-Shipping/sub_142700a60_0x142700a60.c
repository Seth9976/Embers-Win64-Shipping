// 函数: sub_142700a60
// 地址: 0x142700a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0
int32_t rdx_1 = *(arg1 + 0xf0) - *(arg1 + 0x11c)
char arg_10 = 0

if (rdx_1 s> *(arg2 + 0xc))
    sub_140638c50(arg2, rdx_1)

int32_t rcx_1 = 0
int32_t var_c4 = 1
int32_t var_c8 = 0
int32_t r10 = *(arg1 + 0x110)
void* r9 = arg1 + 0xf8
int32_t r8 = 0
void* var_c0 = r9
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_142700b19:
        int32_t rax_8 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t arg_18 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_b4.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_b4:4.d = r8
            var_c8 = rcx_1
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_142700b19
        
        var_b4.d = r10

void* var_70 = arg1 + 0xe8
int128_t var_58 = 0xffffffff
double var_68[0x2] = var_c8.o
double var_98[0x2] = var_70.o
int64_t* result = nullptr
int64_t var_78 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    uint64_t r8_2 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int32_t rcx_3 = var_68[1]:4.d
    int128_t zmm6 = zx.o(0)
    
    while (true)
        void* r13_2 = sx.q(rcx_3) * 0x38 + *var_98[0]
        
        if ((*(r13_2 + 0x2c) & 1) != 0)
            double (* rbx_2)[0x2] = *(r13_2 + 0x10)
            void* rsi_2 = sx.q(*(r13_2 + 0x18)) * 0x3c + rbx_2
            
            if (rbx_2 != rsi_2)
                int64_t r15_1 = *(ThreadLocalStoragePointer + (r8_2 << 3))
                
                while (true)
                    rdi = zx.q(*(rbx_2 + 0x2c))
                    
                    if (data_143f724c4 s> *(0x14 + r15_1))
                        _Init_thread_header(&data_143f724c4)
                        
                        if (data_143f724c4 == 0xffffffff)
                            data_143f724b8 = 0xff
                            zmm6 = sub_140b58260(&data_143f724bc, u"Invalid", 1)
                            _Init_thread_footer(&data_143f724c4)
                    
                    int32_t rcx_4
                    
                    if (rdi.b != data_143f724b8 && not(zmm6.d f>= (*rbx_2)[1].d)
                            && not((*rbx_2)[0].d f>= 3.40282347e+38f))
                        rcx_4 = (*rbx_2)[7].d
                    
                    if (rdi.b != data_143f724b8 && not(zmm6.d f>= (*rbx_2)[1].d)
                            && not((*rbx_2)[0].d f>= 3.40282347e+38f)
                            && (((rcx_4 u>> 1).b & 1) != 0 || ((rcx_4 u>> 2).b & 1) == 0))
                        if (sub_140d3e110(r13_2 + 8) == 0)
                            rdi.b = 1
                            arg_10 = 1
                            break
                        
                        int64_t rax_24 = sub_140d3c6e0(r13_2 + 8)
                        int64_t rbx_6 = sx.q(arg2[1].d)
                        int32_t rcx_17 = (rbx_6 + 1).d
                        arg2[1].d = rcx_17
                        
                        if (rcx_17 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rbx_6 << 3)) = rax_24
                    else
                        rbx_2 += 0x3c
                        
                        if (rbx_2 != rsi_2)
                            continue
                    
                    rdi = zx.q(arg_10)
                    break
        
        var_68[1].d &= not.d(var_98[1]:4.d)
        sub_14059bdd0(&var_98[1])
        result = var_68[0]
        rcx_3 = var_68[1]:4.d
        r8_2 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        
        if (rcx_3 s>= result[3].d)
            break
    
    if (rdi.b != 0)
        var_70 = sub_14270b390
        var_68[0].d = 0
        int64_t* rax_19 = sub_140a84c80(0, 0x30, 0)
        int64_t* var_a8 = rax_19
        int64_t* rdi_1 = rax_19
        
        if (rax_19 != 0)
            *rdi_1 = &data_142e33ea8
            sub_140d3a3a0(&rdi_1[1], arg1)
            *(rdi_1 + 0x10) = var_70.o
            rdi_1[5] = sub_140a387b0()
            *rdi_1 = &data_142e33f00
        
        int64_t* rax_21 = sub_140958da0(&var_70, nullptr, 0xff)
        int64_t* rbx_4 = *rax_21 + 0x10
        *rbx_4 = 0
        rbx_4[1].d = 0
        
        if (&var_a8 != rbx_4 && rdi_1 != 0)
            int64_t r8_3 = *rdi_1
            (*(r8_3 + 0x40))(rdi_1, rbx_4, r8_3)
        
        rbx_4[2].d = 2
        void* rcx_10 = *rax_21
        int32_t r8_4 = rax_21[2].d
        int64_t* rdx_9 = rax_21[1]
        void* rbx_5 = *(rcx_10 + 0x30)
        arg_10.q = rbx_5
        int32_t* rsi_4 = rbx_5 + 0x48
        
        if (rbx_5 != 0)
            *rsi_4 += 1
            rdi_1 = var_a8
            rbx_5 = arg_10.q
        
        result = sub_140978a40(rcx_10, rdx_9, r8_4, 1)
        
        if (rbx_5 != 0)
            result = zx.q(*rsi_4)
            *rsi_4 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(arg_10.q)
            
            rdi_1 = var_a8
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x38))(rdi_1, 0)
            result = sub_140a84c80(rdi_1, 0, 0)
            
            if (result != 0)
                return sub_140a74f90(result)

return result
