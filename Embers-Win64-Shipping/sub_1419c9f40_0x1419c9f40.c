// 函数: sub_1419c9f40
// 地址: 0x1419c9f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r14
int16_t* const var_20 = r14
EnterCriticalSection(arg1 + 0x110)
void* rcx_1 = data_143ddb400
int32_t j = 0

if (rcx_1 != 0)
    bool cond:0_1 = data_143de5848 != 0
    r14 = &data_142d40450
    int16_t* const r15_1 = &data_142d40450
    int64_t var_38 = 0
    
    if (cond:0_1)
        r15_1 = data_143de5840
    
    int64_t rdi_1 = -1
    int32_t var_2c_1 = 0
    int32_t rdx = 0
    int32_t var_30_1 = 0
    int32_t r8_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (r15_1[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rsi_1.d + 1)
            r8_1 = var_2c_1
            rdx = var_30_1
        
        int32_t rax_1 = rsi_1.d + 1 + rdx
        int32_t var_30_2 = rax_1
        
        if (rax_1 s> r8_1)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, r15_1, (rsi_1.d + 1) * 2)
        rcx_1 = data_143ddb400
    
    int16_t* r9_1
    
    if (*(arg1 + 0xb8) == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *(arg1 + 0xb0)
    
    sub_140b00d80(rcx_1, data_1439c9720, data_1439c9728, r9_1, &var_38)
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    bool cond:1_1 = data_143de5848 != 0
    int32_t rdx_4 = 0
    int32_t rcx_6 = 0
    var_38 = 0
    
    if (cond:1_1)
        r14 = data_143de5840
    
    int32_t var_30_3 = 0
    int32_t var_2c_2 = 0
    
    if (r14 != 0 && *r14 != 0)
        do
            rdi_1 += 1
        while (r14[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rdi_1.d + 1)
            rcx_6 = var_2c_2
            rdx_4 = var_30_3
        
        int32_t rax_2 = rdx_4 + rdi_1.d + 1
        int32_t var_30_4 = rax_2
        
        if (rax_2 s> rcx_6)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, r14, (rdi_1.d + 1) * 2)
    
    sub_140af04f0(data_143ddb400, 0, &var_38)
    int64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if (sub_1419cf250() != 0)
    sub_1419d7290(arg1, 1)

if (sub_1419cead0() != 0 && arg2 == 0)
    sub_1419d7290(arg1, 0)

sub_1419ce1a0(arg1, 1)
int64_t* i = data_1439c9570
int64_t rdx_8 = sx.q(data_1439c9578)

for (; i != &i[rdx_8 * 2]; i = &i[2])
    if (i[1].d != 0 && *i != 0)
        int32_t rax_5 = (rdx_8 - 1).d
        int32_t r15_2 = *(arg1 + 0xc0)
        int32_t rcx_19 = data_1439c9584 + 1
        r14.b = 0
        data_1439c9584 = rcx_19
        int64_t rdi_3 = sx.q(rax_5)
        
        if (rax_5 s>= 0)
            int64_t rsi_4 = rdi_3 << 4
            int64_t temp0_1
            
            do
                int64_t rax_6 = data_1439c9570
                
                if (*(rsi_4 + rax_6 + 8) == 0)
                    r14.b = 1
                else
                    int64_t* rcx_20 = *(rsi_4 + rax_6)
                    
                    if (rcx_20 == 0)
                        r14.b = 1
                    else if ((*(*rcx_20 + 0x50))(rcx_20, arg1 + 0xb0, zx.q(r15_2)) == 0)
                        r14.b = 1
                
                rsi_4 -= 0x10
                temp0_1 = rdi_3
                rdi_3 -= 1
            while (temp0_1 - 1 s>= 0)
            rcx_19 = data_1439c9584
            rdx_8 = zx.q(data_1439c9578)
        
        data_1439c9584 = rcx_19 - 1
        
        if (r14.b != 0 && rcx_19 - 1 s<= 0)
            int32_t rsi_5 = rdx_8.d
            
            if (rdx_8.d s> 0)
                int64_t* rdi_4 = nullptr
                
                do
                    int64_t rax_9 = data_1439c9570
                    
                    if (*(rdi_4 + rax_9 + 8) == 0)
                        sub_1405a4880(&data_1439c9570, j, 1, 1)
                    else
                        int64_t* rcx_22 = *(rdi_4 + rax_9)
                        
                        if (rcx_22 == 0)
                            sub_1405a4880(&data_1439c9570, j, 1, 1)
                        else if ((*(*rcx_22 + 0x20))(rcx_22) != 0)
                            sub_1405a4880(&data_1439c9570, j, 1, 1)
                        else
                            j += 1
                            rdi_4 = &rdi_4[2]
                    
                    rdx_8 = zx.q(data_1439c9578)
                while (j s< rdx_8.d)
            
            int32_t rax_12 = (rdx_8 * 2).d
            
            if (rax_12 s<= 2)
                rax_12 = 2
            
            data_1439c9580 = rax_12
            
            if (rsi_5 s> rax_12 && data_1439c957c != rdx_8.d)
                sub_1405a5410(&data_1439c9570, rdx_8.d)
        
        break

*(arg1 + 0xdd) = 0
int64_t result = sub_141967ad0()

if (arg1 == -0x110)
    return result

return LeaveCriticalSection(arg1 + 0x110) __tailcall
