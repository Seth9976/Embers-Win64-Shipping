// 函数: sub_1427010e0
// 地址: 0x1427010e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r12 = arg3
char var_98
int128_t zmm6 = sub_142702060(&var_98, arg2)
int32_t rdx_1 = *(arg1 + 0xf0) - *(arg1 + 0x11c)

if (rdx_1 s> *(r12 + 0xc))
    sub_140638c50(r12, rdx_1)

int32_t rcx_2 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x110)
void* r9 = arg1 + 0xf8
void* var_80 = r9
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_1427011a9:
        int32_t rax_8 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_74:4.d = r8
            var_88 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1427011a9
        
        var_74.d = r10

int128_t var_48 = 0xffffffff
double var_58[0x2] = var_88.o
var_88.o = (arg1 + 0xe8).o
void* result = nullptr
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_78.o = var_58

if (0 s< r10)
    uint64_t rdx_6 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int32_t i_1
    int32_t i = i_1
    char r15_1 = var_98
    int128_t var_38_1 = zmm6
    zmm6 = zx.o(0)
    
    do
        if (arg2 == 0)
            goto label_142701350
        
        void* rax_11 = sub_14272a610()
        int64_t rax_12
        
        if (rax_11 != 0)
            rax_12 = sx.q(*(rax_11 + 0x38))
        
        int64_t r13_1
        
        if (rax_11 == 0 || rax_12.d s> arg2[7].d || *(arg2[6] + (rax_12 << 3)) != rax_11 + 0x30)
            rdx_6 = zx.q(data_14401b1a0)
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        label_142701350:
            r13_1 = sx.q(i) * 0x38
            int64_t rcx_9 = *var_88.q
            double (* rdi_3)[0x2] = *(rcx_9 + r13_1 + 0x10)
            void* r14_3 = sx.q(*(rcx_9 + r13_1 + 0x18)) * 0x3c + rdi_3
            
            if (rdi_3 != r14_3)
                int64_t r12_1 = *(ThreadLocalStoragePointer + (rdx_6 << 3))
                
                while (true)
                    char rsi_2 = *(rdi_3 + 0x2c)
                    
                    if (data_143f724c4 s> *(0x14 + r12_1))
                        _Init_thread_header(&data_143f724c4)
                        
                        if (data_143f724c4 == 0xffffffff)
                            data_143f724b8 = 0xff
                            zmm6 = sub_140b58260(&data_143f724bc, u"Invalid", 1)
                            _Init_thread_footer(&data_143f724c4)
                    
                    if (rsi_2 != data_143f724b8 && not(zmm6.d f>= (*rdi_3)[1].d)
                            && not((*rdi_3)[0].d f>= 3.40282347e+38f))
                        int32_t rcx_10 = (*rdi_3)[7].d
                        
                        if (((rcx_10 u>> 1).b & 1) != 0 || ((rcx_10 u>> 2).b & 1) == 0)
                            r12 = arg3
                            break
                    
                    rdi_3 += 0x3c
                    
                    if (rdi_3 == r14_3)
                        goto label_142701421_1
                
                goto label_1427013d2
        else
            r13_1 = sx.q(i) * 0x38
            int64_t r14_1 = *var_88.q
            
            if (zx.d(r15_1) s< *(r14_1 + r13_1 + 0x18))
                int64_t rsi_1 = *(r14_1 + r13_1 + 0x10)
                double (* rdi_2)[0x2] = zx.q(r15_1) * 0x3c
                char r15_2 = *(rdi_2 + rsi_1 + 0x2c)
                
                if (data_143f724c4 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143f724c4)
                    
                    if (data_143f724c4 == 0xffffffff)
                        data_143f724b8 = 0xff
                        zmm6 = sub_140b58260(&data_143f724bc, u"Invalid", 1)
                        _Init_thread_footer(&data_143f724c4)
                
                if (r15_2 == data_143f724b8 || zmm6.d f>= *(rdi_2 + rsi_1 + 8)
                    || (*(rdi_2 + rsi_1))[0].d f>= 3.40282347e+38f
                    || ((*(*(r14_1 + r13_1 + 0x10) + rdi_2 + 0x38) u>> 2).b & 1) != 0)
                label_142701421:
                    r15_1 = var_98
                else
                label_1427013d2:
                    int64_t* rdi_4 = var_88.q
                    
                    if (sub_140d3e110(*rdi_4 + 8 + r13_1) != 0)
                        int64_t rax_27 = sub_140d3c6e0(*rdi_4 + 8 + r13_1)
                        int64_t rdi_5 = sx.q(r12[1].d)
                        int32_t rcx_18 = (rdi_5 + 1).d
                        r12[1].d = rcx_18
                        
                        if (rcx_18 s> *(r12 + 0xc))
                            sub_1405a4d70(r12)
                        
                        *(*r12 + (rdi_5 << 3)) = rax_27
                    
                label_142701421_1:
                    r15_1 = var_98
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
        r12 = arg3
        rdx_6 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    while (i s< *(result + 0x18))

return result
