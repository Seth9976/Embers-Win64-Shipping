// 函数: sub_1405a3960
// 地址: 0x1405a3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t numArgs = 0
PWSTR* hMem_1 = CommandLineToArgvW(GetCommandLineW(), &numArgs)
PWSTR* hMem = hMem_1

if (hMem_1 == 0)
    return hMem_1

int64_t rcx_1 = data_143cd5b18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    hMem_1 = hMem

int32_t rsi = 1
data_143cd5b18 = 0
data_143cd5b20.q = 0
int32_t arg_10 = 1

if (numArgs s> 1)
    void* r14_1 = &hMem_1[1]
    void* arg_20 = r14_1
    
    do
        sub_140a20ba0(&data_143cd5b18, &data_142d404d4, 1)
        int16_t* rdi_1 = *r14_1
        int32_t rdx_1 = 0
        int32_t var_a8_1 = 0
        int32_t rcx_2 = 0
        int32_t var_a4_1 = 0
        int16_t* var_b0 = nullptr
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_b0, rbx_1.d + 1)
                rcx_2 = var_a4_1
                rdx_1 = var_a8_1
            
            int32_t rax_1 = rbx_1.d + 1 + rdx_1
            var_a8_1 = rax_1
            
            if (rax_1 s> rcx_2)
                sub_140594770(&var_b0)
            
            UnDecorator::getReferenceType(var_b0, rdi_1, (rbx_1.d + 1) * 2)
        
        if (sub_140a23cf0(&var_b0, &data_142d404d4, 1, 0, 0xffffffff) != 0xffffffff)
            int32_t rsi_1 = 0
            char rax_3 = sub_140a32ae0(&var_b0, &data_142d404b0, 1)
            int64_t r8_3 = sx.q(var_a8_1)
            int16_t* r13_1 = var_b0
            
            if (rax_3 != 0)
                int16_t* rax_4 = r13_1
                void* rdx_5 = &r13_1[r8_3]
                
                if (r13_1 != rdx_5)
                    do
                        if (*rax_4 == 0x3d)
                            int32_t rax_6 = ((rax_4 - r13_1) s>> 1).d
                            
                            if (rax_6 != 0xffffffff)
                                rsi_1 = rax_6 + 1
                            
                            break
                        
                        rax_4 = &rax_4[1]
                    while (rax_4 != rdx_5)
            
            int32_t rbx_3 = (r8_3 - 1).d
            
            if (r8_3.d == 0)
                rbx_3 = 0
            
            int32_t rcx_8
            
            if (rsi_1 s>= 0)
                rcx_8 = rbx_3
                
                if (rsi_1 s< rbx_3)
                    rcx_8 = rsi_1
            else
                rcx_8 = 0
            
            int64_t r9_1 = sx.q(rcx_8)
            
            if (sx.q(rsi_1) + 0x7fffffff s< r9_1)
                rbx_3 = rcx_8
            else if (sx.q(rsi_1) + 0x7fffffff s< sx.q(rbx_3))
                rbx_3 = rsi_1 + 0x7fffffff
            
            int16_t* var_a0 = nullptr
            int16_t* const rax_8 = &data_142d40450
            int64_t var_98_1 = 0
            
            if (r8_3.d != 0)
                rax_8 = r13_1
            
            int32_t arg_8 = 0
            int32_t rbx_4 = rbx_3 - rcx_8
            int16_t* r12_1 = nullptr
            int32_t rdi_2 = 0
            void* r14_2 = &rax_8[r9_1]
            
            if (r14_2 != 0 && *r14_2 != 0 && rbx_4 s> 0)
                if (rbx_4 + 1 s> 0)
                    sub_1405947f0(&var_a0, rbx_4 + 1)
                    r15 = var_98_1:4.d
                    rdi_2 = var_98_1.d
                    r12_1 = var_a0
                    arg_8 = r15
                
                rdi_2 = rdi_2 + 1 + rbx_4
                var_98_1.d = rdi_2
                
                if (rdi_2 s> r15)
                    sub_140594770(&var_a0)
                    rdi_2 = var_98_1.d
                    r12_1 = var_a0
                    arg_8 = var_98_1:4.d
                
                UnDecorator::getReferenceType(r12_1, r14_2, rbx_4 * 2)
                r12_1[sx.q(rdi_2) - 1] = 0
                r8_3 = zx.q(var_a8_1)
                r13_1 = var_b0
            
            var_a0 = nullptr
            int64_t var_98_2 = 0
            int32_t rbx_5
            
            if (r8_3.d == 0)
                r13_1 = &data_142d40450
                rbx_5 = 0
            else
                rbx_5 = (r8_3 - 1).d
            
            if (rsi_1 s< 0)
                rbx_5 = 0
            else if (rsi_1 s< rbx_5)
                rbx_5 = rsi_1
            
            int16_t* var_90 = nullptr
            int16_t* r15_1 = nullptr
            int64_t var_88_1 = 0
            int32_t rsi_2 = 0
            int32_t r14_3 = 0
            int32_t rax_12
            
            if (r13_1 != 0 && *r13_1 != 0 && rbx_5 s> 0)
                if (rbx_5 + 1 s> 0)
                    sub_1405947f0(&var_90, rbx_5 + 1)
                    r14_3 = var_88_1:4.d
                    rsi_2 = var_88_1.d
                    r15_1 = var_90
                
                rsi_2 = rsi_2 + 1 + rbx_5
                var_88_1.d = rsi_2
                
                if (rsi_2 s> r14_3)
                    sub_140594770(&var_90)
                    r14_3 = var_88_1:4.d
                    rsi_2 = var_88_1.d
                    r15_1 = var_90
                
                UnDecorator::getReferenceType(r15_1, r13_1, rbx_5 * 2)
                r15_1[sx.q(rsi_2) - 1] = 0
                rax_12 = 1
            
            if (r13_1 == 0 || *r13_1 == 0 || rbx_5 s<= 0 || rsi_2 == 0)
                rax_12 = 2
            
            int16_t* var_80 = r15_1
            int32_t rdx_14 = rax_12 + rsi_2
            r15 = 0
            var_90 = nullptr
            int64_t var_88_2 = 0
            
            if (rdx_14 s> r14_3)
                sub_1405947f0(&var_80, rdx_14)
            
            int32_t rdx_15 = sub_140a20ba0(&var_80, &data_142d4056c, 1)
            int16_t* rsi_4 = var_80
            var_80 = nullptr
            int32_t var_78_1
            var_78_1.q = 0
            int16_t* rax_14
            int32_t rcx_17
            
            if (rsi_2 s> 1)
                int32_t rbx_6 = rdi_2 - 1
                
                if (rdi_2 == 0)
                    rbx_6 = 0
                
                int32_t rcx_18
                
                if (rsi_2 == 0)
                    rcx_18 = rsi_2 + 1
                
                if (rsi_2 != 0 || rbx_6 == 0)
                    rcx_18 = 0
                
                int16_t* var_70 = rsi_4
                int32_t rdx_17 = rbx_6 + rcx_18 + rsi_2
                rsi_4 = nullptr
                
                if (rdx_17 s> r14_3)
                    sub_1405947f0(&var_70, rdx_17)
                
                rdx_15 = sub_140a20ba0(&var_70, r12_1, rbx_6)
                rax_14 = var_70
                rcx_17 = r14_3
                rdi_2 = rsi_2
                var_70 = nullptr
                int32_t var_68_1
                var_68_1.q = 0
            else
                rcx_17 = arg_8
                rax_14 = r12_1
                r12_1 = nullptr
            
            int16_t* var_60 = rax_14
            int32_t rdx_21 = sbb.d(rdx_15, rdx_15, rdi_2 != 0) + 2 + rdi_2
            
            if (rdx_21 s> rcx_17)
                sub_1405947f0(&var_60, rdx_21)
            
            sub_140a20ba0(&var_60, &data_142d4056c, 1)
            int16_t* rcx_23 = var_b0
            int16_t* rbx_7 = var_60
            var_60 = nullptr
            int32_t var_58_1
            var_58_1.q = 0
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            var_b0 = rbx_7
            var_a8_1 = rdi_2
            int32_t var_a4_2 = rcx_17
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
            
            r14_1 = arg_20
            rsi = arg_10
        
        int32_t r8_10 = var_a8_1 - 1
        
        if (var_a8_1 == 0)
            r8_10 = 0
        
        sub_140a20ba0(&data_143cd5b18, var_b0, r8_10)
        int16_t* rcx_26 = var_b0
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        rsi += 1
        r14_1 += 8
        arg_10 = rsi
        arg_20 = r14_1
    while (rsi s< numArgs)

LocalFree(hMem)
HLOCAL rax_18
rax_18.b = 1
return rax_18
