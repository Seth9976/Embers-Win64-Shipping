// 函数: sub_142709fa0
// 地址: 0x142709fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* r14 = arg3
char var_c8
sub_142702060(&var_c8, arg3)
TEB* gsbase
int32_t* r12_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f724c4 s> *r12_1)
    _Init_thread_header(&data_143f724c4)
    
    if (data_143f724c4 == 0xffffffff)
        data_143f724b8 = 0xff
        sub_140b58260(&data_143f724bc, u"Invalid", 1)
        _Init_thread_footer(&data_143f724c4)

char r15 = var_c8
int64_t rdi

if (r15 != data_143f724b8)
    int64_t var_c4
    rdi = var_c4
label_14270a0b6:
    int32_t rax_11 = arg1[0x12].d
    uint32_t rbx_2 = zx.d(r15)
    
    if (rbx_2 s>= rax_11)
        var_c8.d = rax_11
        int32_t rcx_6 = rax_11
        int32_t rax_12 = rax_11 + rbx_2 - rax_11 + 1
        arg1[0x12].d = rax_12
        
        if (rax_12 s> *(arg1 + 0x94))
            sub_1405a4d70(&arg1[0x11])
            rcx_6 = var_c8.d
        
        memset(arg1[0x11] + (sx.q(rcx_6) << 3), 0, sx.q(rbx_2 - rax_11 + 1) << 3)
    
    void** r12_2 = zx.q(r15) << 3
    
    if (*(r12_2 + arg1[0x11]) == 0)
        var_c8.q = 0
        
        if (r14 == 0)
            r14 = nullptr
        else
            void* rax_16 = sub_14272a610()
            
            if (rax_16 == 0)
                r14 = nullptr
            else
                int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                
                if (rax_17.d s> r14[7].d || *(r14[6] + (rax_17 << 3)) != rax_16 + 0x30)
                    r14 = nullptr
        
        char rax_19 = sub_140b5b8a0(0, 0)
        uint64_t rbx_5 = var_c8.q
        uint32_t rcx_12
        rcx_12.b = (rbx_5 u>> 0x20).d == 0
        
        if ((rcx_12.b & rax_19) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        *(r12_2 + arg1[0x11]) = sub_140d2dfc0(r14, arg1, rbx_5, 0, 0, 0, 0, 0, 0)
        void* rdx_7 = arg1[0x11] + r12_2
        int32_t rcx_16 = *(*rdx_7 + 0x30)
        int32_t rax_24
        
        if (((rcx_16 u>> 1).b & 1) != 0 || (rcx_16.b & 1) != 0)
            rax_24 = 2
        else
            rax_24 = 0
        
        arg1[0x20].d |= rax_24
        
        if (((*(*rdx_7 + 0x30) u>> 1).b & 1) != 0)
            void* rax_27 = (*(*arg1 + 0x150))(arg1)
            
            if (sub_1424385d0(rax_27) != 0)
                int32_t var_b0_1 = 0
                uint64_t (* var_b8_1)(int64_t* arg1, char* arg2) = sub_1427098b0
                int64_t* rax_29 = sub_140a84c80(0, 0x40, 0)
                
                if (rax_29 != 0)
                    *rax_29 = &data_14347eda0
                    sub_140d3a3a0(&rax_29[1], arg1)
                    *(rax_29 + 0x10) = var_b8_1.o
                    rax_29[4].b = r15
                    *(rax_29 + 0x24) = rdi
                    rax_29[6] = sub_140a387b0()
                    *rax_29 = &data_14347edf8
                
                void* rax_31 = *(rax_27 + 0x188)
                void* rsi_1
                
                if (rax_31 == 0)
                    rsi_1 = *(rax_27 + 0x300)
                else
                    rsi_1 = *(rax_31 + 0xc0)
                
                int64_t var_a8 = 0
                int32_t var_a0_1 = 0
                
                if (rax_29 != 0)
                    (*(*rax_29 + 0x40))(rax_29, &var_a8)
                
                void var_98
                sub_140d3a3a0(&var_98, nullptr)
                int64_t var_90_1 = 0
                int64_t var_88_1 = 0
                void* var_78_1 = nullptr
                sub_1423e6520(rsi_1, &var_c8, &var_a8)
                
                if (var_88_1 != 0)
                    void var_68
                    void* rcx_25 = &var_68
                    
                    if (var_78_1 != 0)
                        rcx_25 = var_78_1
                    
                    (*(*rcx_25 + 0x10))(rcx_25)
                
                sub_140745b20(&var_a8)
                
                if (rax_29 != 0)
                    (*(*rax_29 + 0x38))(rax_29, 0)
                    int64_t rax_36 = sub_140a84c80(rax_29, 0, 0)
                    
                    if (rax_36 != 0)
                        sub_140a74f90(rax_36)
    
    *arg2 = r15
    *(arg2 + 4) = rdi
else
    int64_t* rbx_1
    
    if (r14 == 0)
        rbx_1 = nullptr
    else
        void* rax_4 = sub_14272a610()
        
        if (rax_4 == 0)
            rbx_1 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> r14[7].d || *(r14[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_1 = nullptr
            else
                rbx_1 = r14
    
    int64_t* rcx_4 = rbx_1[0x23]
    
    if (rcx_4 == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        rcx_4 = rbx_1[0x23]
    
    char* rax_9 = (*(*rcx_4 + 0x280))(rcx_4, &var_c8)
    r15 = *rax_9
    rdi = *(rax_9 + 4)
    
    if (data_143f724c4 s> *r12_1)
        _Init_thread_header(&data_143f724c4)
        
        if (data_143f724c4 == 0xffffffff)
            data_143f724b8 = 0xff
            sub_140b58260(&data_143f724bc, u"Invalid", 1)
            _Init_thread_footer(&data_143f724c4)
    
    if (r15 != data_143f724b8)
        goto label_14270a0b6
    
    sub_142704050(arg2)
__security_check_cookie(rax_1 ^ &var_118)
return arg2
