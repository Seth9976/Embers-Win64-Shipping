// 函数: ?grow@?$Map@KUClsData@@V?$HashClass@K$0A@@pdb_internal@@XVCriticalSectionNop@@@pdb_internal@@IEAAHXZ
// 地址: 0x1405be9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
void* r9 = arg1 + 0x470
int32_t var_68 = 0xffffffff
char rax = not.b(*(arg1 + 0x328))
void* var_70 = r9
int64_t var_64 = 0
uint32_t rdi = zx.d(rax) & 0x18
*(arg1 + 0x328) = rdi.b
int32_t r8 = 0
int32_t r11 = *(r9 + 0x18)
int32_t rcx = 0
int32_t var_78 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1405bea78:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1405bea78
        
        var_64.d = r11

double zmm4[0x2] = var_68.o
void* var_10 = arg1 + 0x460
int16_t var_40 = 0
double zmm3[0x2] = var_78.o
int32_t* result = zmm3[0]
var_68.o = zmm3
var_78.o = (arg1 + 0x460).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_58[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< result[6])
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_6 = sx.q(i) << 5
        int64_t rcx_4 = *var_78.q
        
        if ((*(rdx_6 + rcx_4 + 8) & rdi) != 0)
            *(rdx_6 + rcx_4 + 0x10) = 0
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< result[6])
    
    if (var_40.b != 0 && var_40:1.b != 0)
        result = sub_1405b67e0(arg1 + 0x460, *(arg1 + 0x468) - *(arg1 + 0x494), 1)

void* rcx_7 = *(arg1 + 0x500)

if (rcx_7 == 0)
    return result

return sub_1405c2a20(rcx_7, zx.d(*(arg1 + 0x328)), arg1)
