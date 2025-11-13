// 函数: sub_141c39e90
// 地址: 0x141c39e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
TEB* gsbase
int32_t* rax_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f349a0 s> *rax_2)
    _Init_thread_header(&data_143f349a0)
    
    if (data_143f349a0 == 0xffffffff)
        sub_140b58260(&data_143f34998, u"AudioFFTAlgorithmFactory", 1)
        _Init_thread_footer(&data_143f349a0)

int64_t rbx = data_143f34998
sub_140a387e0()
int64_t* r15 = nullptr
void** var_68 = &data_14399e720
int64_t* var_58 = nullptr
int32_t var_4c = 0
void* r8 = data_14399e720
void** rdi = &data_14399e720
int64_t* r13 = nullptr
int32_t rsi = 0
int32_t r12 = 0
int32_t rax_4 = (*(r8 + 8))(&data_14399e720, rbx, r8)
int32_t r14 = 0
int32_t var_50

if (rax_4 s> 0)
    do
        void* r9_1 = *rdi
        void* rax_5 = (*(r9_1 + 0x10))(rdi, rbx, zx.q(r14), r9_1)
        
        if (rax_5 != 0)
            r15 = rax_5 - 8
        
        int64_t rdi_1 = sx.q(rsi)
        rsi = (rdi_1 + 1).d
        var_50 = rsi
        
        if (rsi s> r12)
            sub_1405a4d70(&var_58)
            r12 = var_4c
            rsi = var_50
            r13 = var_58
        
        r13[rdi_1] = r15
        r14 += 1
        r15 = nullptr
        rdi = var_68
    while (r14 s< rax_4)

int32_t arg_20
arg_20.q = 0
int32_t rdi_2 = 0
var_58 = nullptr
int32_t r12_1 = 0
int32_t var_4c_1 = 0
int64_t* rbx_1 = r13
int64_t r14_1 = 0
void** rdx_4 = sx.q(rsi) << 3 u>> 3

if (r13 u> &r13[sx.q(rsi)])
    rdx_4 = nullptr

var_68 = rdx_4

if (rdx_4 != 0)
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            int64_t rsi_1 = sx.q(rdi_2)
            rdi_2 = (rsi_1 + 1).d
            var_50 = rdi_2
            
            if (rdi_2 s> r12_1)
                sub_1405a4d70(&var_58)
                rcx_3 = *rbx_1
                rdx_4 = var_68
                r12_1 = var_4c_1
                rdi_2 = var_50
                r15 = var_58
            
            r15[rsi_1] = rcx_3
        
        rbx_1 = &rbx_1[1]
        r14_1 += 1
    while (r14_1 != rdx_4)
    
    arg_20.q = r15

if (r13 != 0)
    sub_140a74f90(r13)

int64_t** result

if (rdi_2 != 0)
    int64_t rbx_3 = *arg_18
    int32_t var_4c_2
    int32_t rsi_2
    int64_t* r13_1
    
    if (data_143f34940 != rbx_3)
        r13_1 = nullptr
        var_58 = nullptr
        rsi_2 = 0
        var_4c_2 = 0
        int64_t* r14_2 = r15
        int64_t r12_2 = 0
        uint64_t rcx_6 = sx.q(rdi_2) << 3 u>> 3
        
        if (r15 u> &r15[sx.q(rdi_2)])
            rcx_6 = 0
        
        arg_18 = rcx_6
        
        if (rcx_6 != 0)
            int32_t r15_1 = 0
            
            do
                int64_t* rcx_7 = *r14_2
                
                if (rbx_3 == *(*(*rcx_7 + 8))(rcx_7, &var_68))
                    int64_t rdi_3 = sx.q(rsi_2)
                    rsi_2 = (rdi_3 + 1).d
                    var_50 = rsi_2
                    
                    if (rsi_2 s> r15_1)
                        sub_1405a4d70(&var_58)
                        rsi_2 = var_50
                        r13_1 = var_58
                        r15_1 = var_4c_2
                    
                    r13_1[rdi_3] = *r14_2
                
                r14_2 = &r14_2[1]
                r12_2 += 1
            while (r12_2 != arg_18)
            
            r15 = arg_20.q
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        arg_20.q = r13_1
        r15 = r13_1
        rdi_2 = rsi_2
    
    if (data_143f34940 == rbx_3 || rsi_2 != 0)
        int64_t* rax_19 = arg2
        
        if (*(rax_19 + 5) == 0)
            int64_t* r12_3 = nullptr
            var_58 = nullptr
            int32_t rbx_4 = 0
            int32_t var_4c_3 = 0
            int32_t r13_2 = 0
            int64_t* rsi_3 = r15
            int64_t r14_3 = 0
            uint64_t rcx_12 = sx.q(rdi_2) << 3 u>> 3
            
            if (r15 u> &r15[sx.q(rdi_2)])
                rcx_12 = 0
            
            if (rcx_12 != 0)
                do
                    int64_t* rcx_13 = *rsi_3
                    
                    if ((*(*rcx_13 + 0x10))(rcx_13) == 0)
                        int64_t rdi_4 = sx.q(rbx_4)
                        rbx_4 = (rdi_4 + 1).d
                        var_50 = rbx_4
                        
                        if (rbx_4 s> r13_2)
                            sub_1405a4d70(&var_58)
                            r13_2 = var_4c_3
                            rbx_4 = var_50
                            r12_3 = var_58
                        
                        r12_3[rdi_4] = *rsi_3
                    
                    rsi_3 = &rsi_3[1]
                    r14_3 += 1
                while (r14_3 != rcx_12)
                
                r15 = arg_20.q
            
            if (r15 != 0)
                sub_140a74f90(r15)
            
            rax_19 = arg2
            r15 = r12_3
            arg_20.q = r12_3
            rdi_2 = rbx_4
        
        if (*(rax_19 + 4) == 0)
            int64_t* r12_4 = nullptr
            var_58 = nullptr
            int32_t rbx_5 = 0
            int32_t var_4c_4 = 0
            int32_t r13_3 = 0
            int64_t* rsi_4 = r15
            int64_t r14_4 = 0
            uint64_t rcx_17 = sx.q(rdi_2) << 3 u>> 3
            
            if (r15 u> &r15[sx.q(rdi_2)])
                rcx_17 = 0
            
            if (rcx_17 != 0)
                do
                    int64_t* rcx_18 = *rsi_4
                    
                    if ((*(*rcx_18 + 0x18))(rcx_18) == 0)
                        int64_t rdi_5 = sx.q(rbx_5)
                        rbx_5 = (rdi_5 + 1).d
                        var_50 = rbx_5
                        
                        if (rbx_5 s> r13_3)
                            sub_1405a4d70(&var_58)
                            r13_3 = var_4c_4
                            rbx_5 = var_50
                            r12_4 = var_58
                        
                        r12_4[rdi_5] = *rsi_4
                    
                    rsi_4 = &rsi_4[1]
                    r14_4 += 1
                while (r14_4 != rcx_17)
                
                r15 = arg_20.q
            
            if (r15 != 0)
                sub_140a74f90(r15)
            
            rax_19 = arg2
            r15 = r12_4
            arg_20.q = r12_4
            rdi_2 = rbx_5
        
        var_68 = *rax_19
        int64_t* r12_5 = nullptr
        int32_t rbx_6 = 0
        var_58 = nullptr
        int32_t r13_4 = 0
        int32_t var_4c_5 = 0
        int64_t* rsi_5 = r15
        int64_t r14_5 = 0
        uint64_t rcx_22 = sx.q(rdi_2) << 3 u>> 3
        
        if (r15 u> &r15[sx.q(rdi_2)])
            rcx_22 = 0
        
        if (rcx_22 != 0)
            do
                int64_t* rcx_23 = *rsi_5
                
                if ((*(*rcx_23 + 0x20))(rcx_23, &var_68) != 0)
                    int64_t rdi_6 = sx.q(rbx_6)
                    rbx_6 = (rdi_6 + 1).d
                    var_50 = rbx_6
                    
                    if (rbx_6 s> r13_4)
                        sub_1405a4d70(&var_58)
                        r13_4 = var_4c_5
                        rbx_6 = var_50
                        r12_5 = var_58
                    
                    r12_5[rdi_6] = *rsi_5
                
                rsi_5 = &rsi_5[1]
                r14_5 += 1
            while (r14_5 != rcx_22)
            
            r15 = arg_20.q
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        if (data_143f34990 s> *rax_2)
            _Init_thread_header(&data_143f34990)
            
            if (data_143f34990 == 0xffffffff)
                sub_140b58260(&var_58, u"FVectorFFTFactory", 1)
                sub_140b58260(&var_50, u"OriginalFFT_Deprecated", 1)
                data_143f34988 = 2
                data_143f34980 = 0
                sub_1405c4a00(&data_143f34980, 2, 0)
                *data_143f34980 = var_58.o
                atexit(&data_142cf66c0)
                _Init_thread_footer(&data_143f34990)
        
        arg_18.b = 0
        sub_141c2d770(r12_5, rbx_6, arg_18.b, &arg_18)
        result = arg1
        *result = r12_5
        result[1].d = rbx_6
        *(result + 0xc) = r13_4
    else
        *arg1 = r13_1
        *(arg1 + 0xc) = var_4c_2
        result = arg1
        arg1[1].d = 0
else
    result = arg1
    *result = r15
    result[1].d = 0
    *(result + 0xc) = r12_1

return result
