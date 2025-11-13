// 函数: sub_14137da20
// 地址: 0x14137da20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)

if (rdi.d s<= 1 || (arg3.b & 1) != 0)
label_14137ddc1:
    
    if (rdi.d s> 0)
        int64_t rdi_6 = 0
        
        do
            void* rbx_5 = *(**(arg2 + 8) + (rdi_6 << 3))
            int64_t var_58_1 = 0
            void** const var_68 = &data_142f6d300
            void* var_60_1 = rbx_5
            int64_t* rax_32 = *(rbx_5 + 0xd0)
            
            if (rax_32 != 0)
                rax_32[1].d += 1
            
            int64_t* rcx_17 = *(rbx_5 + 8)
            (*(*rcx_17 + 0x20))(rcx_17, &var_68)
            int32_t rdx_13 = *(rbx_5 + 0x50)
            
            if (*(rbx_5 + 0x54) != rdx_13)
                sub_140a05f70(rbx_5 + 0x48, rdx_13)
            
            int32_t rdx_14 = *(rbx_5 + 0x40)
            
            if (*(rbx_5 + 0x44) != rdx_14)
                sub_1405c55e0(rbx_5 + 0x38, rdx_14)
            
            if (rax_32 != 0)
                rax_32[1].d -= 1
                
                if (rax_32[1].d == 1)
                    (**rax_32)(rax_32, 1)
            
            rdi_6 += 1
        while (rdi_6 s< rdi)
    
    return 

if (sub_140b011d0().b == 0)
    goto label_14137ddc1

int64_t* rax_1 = sub_140a242a0()
int32_t r12_1 = (rdi - 1).d
int64_t rdx = *rax_1
int32_t* rax = (*(rdx + 0x18))(rax_1, rdx)

if (rax.d s<= r12_1)
    r12_1 = rax.d

int32_t arg_20 = r12_1

if (r12_1 == 0)
    goto label_14137ddc1

uint8_t r15_2 = (arg3 u>> 2).b & 1
int32_t* rax_2 = j_sub_140a82f30(0x38)
int32_t* rbx_1 = rax_2
char arg_8

if (rax_2 == 0)
    rbx_1 = nullptr
else
    uint64_t rsi_1 = zx.q(r12_1 + 1)
    
    if (rdi.d s> rsi_1.d)
        arg_8 = 1
    
    if (rdi.d s<= rsi_1.d || r15_2 == 0)
        arg_8 = 0
    
    *(rax_2 + 0x10) = *arg2
    *(rbx_1 + 0x20) = sub_140a491d0(0)
    rbx_1[0xa] = 0
    rbx_1[0xb] = 0
    rbx_1[0xc].w = 0
    *(rbx_1 + 0x32) = arg_8
    
    if ((arg3.b & 2) == 0)
        *rbx_1 = 0
        uint32_t r9_2 = (rsi_1 * 3).d * 2
        int32_t i_2 = 6
        int32_t rax_11
        int32_t temp0_1
        int32_t i
        
        do
            temp0_1 = divs.dp.d(sx.q(rdi.d), r9_2)
            rbx_1[1] = temp0_1
            
            if (temp0_1 == 0)
                rax_11 = *rbx_1
            else
                rax_11 = divs.dp.d(sx.q(rdi.d), temp0_1)
                *rbx_1 = rax_11
                
                if (rax_11 s>= zx.d(arg_8) + rsi_1.d)
                    break
            
            r9_2 -= rsi_1.d
            i = i_2
            i_2 -= 1
        while (i != 1)
        r12_1 = arg_20
        rbx_1[2] = rdi.d - temp0_1 * rax_11
    else
        *rbx_1 = rdi.d
        rbx_1[1] = 1
        rbx_1[2] = 0

void*** rax_12 = j_sub_140a82f30(0x18)

if (rax_12 == 0)
    rax_12 = nullptr
else
    rax_12[1].d = 1
    *rax_12 = &data_142f6e320
    *(rax_12 + 0xc) = 1
    rax_12[2] = rbx_1

void var_50
int64_t* rax_13 = sub_141397de0(&var_50, nullptr, 0xff)
void* rdx_6 = *rax_13
*(rdx_6 + 0x10) = rbx_1
*(rdx_6 + 0x18) = rax_12

if (rax_12 != 0)
    rax_12[1].d += 1

*(rdx_6 + 0x20) = r12_1 - 1
void* rcx_6 = *rax_13
int32_t r8_4 = rax_13[2].d
int64_t* rdx_7 = rax_13[1]
int64_t* rbx_2 = *(rcx_6 + 0x30)
int64_t* var_70_1 = rbx_2
int32_t* rdi_3 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_3 += 1
    rbx_2 = var_70_1

sub_1413aa910(rcx_6, rdx_7, r8_4, 1)

if (rbx_2 != 0)
    int32_t rax_14 = *rdi_3
    *rdi_3 -= 1
    
    if (rax_14 == 1)
        sub_140a2f6e0(var_70_1)

if (0 == rbx_1[0xa])
    rbx_1[0xa] = 0
else
    rbx_1[0xa]

int32_t rdx_8 = *rbx_1
int64_t (* r13_1)(void* arg1, int32_t* arg2) = arg_20.q
char r8_5 = *(rbx_1 + 0x32)
int32_t rcx_8 = rbx_1[1]
int32_t r12_4 = rdx_8 - 1
int32_t var_80_1 = rcx_8
arg_20 = r12_4

if (rbx_1 != -0x10)
    r13_1 = sub_141396a30

int32_t var_7c_1 = rdx_8
arg_8 = r8_5

while (true)
    int32_t rbx_3 = rbx_1[0xa]
    rbx_1[0xa] += 1
    
    if (r8_5 != 0 && rbx_3 s> r12_4)
        rbx_3 = r12_4
    
    if (rbx_3 s< rdx_8)
        int32_t rsi_2 = rcx_8
        
        if (rbx_3 == r12_4)
            rsi_2 = rbx_1[2] + rcx_8
        
        int32_t rdi_4 = 0
        
        if (rsi_2 s> 0)
            do
                int32_t var_88 = rdi_4 + rbx_3 * rcx_8
                r13_1(&rbx_1[4], &var_88)
                rdi_4 += 1
            while (rdi_4 s< rsi_2)
            
            r12_4 = arg_20
            rcx_8 = var_80_1
            rdx_8 = var_7c_1
            r8_5 = arg_8
        
        int32_t rax_18 = rbx_1[0xb]
        rbx_1[0xb] += 1
        
        if (rax_18 + 1 == rdx_8)
            break
    
    if (rbx_3 s>= r12_4)
        char rax_20
        
        if (r15_2 != 0)
            rax_20 = sub_140a80e70()
        
        if (r15_2 == 0 || rax_20 == 0)
            int64_t* rcx_13 = *(rbx_1 + 0x20)
            (*(*rcx_13 + 0x20))(rcx_13, 0xffffffff, 0)
        else
            int64_t* rcx_10 = *(rbx_1 + 0x20)
            
            if ((*(*rcx_10 + 0x20))(rcx_10, 1, 0) == 0)
                char i_1
                
                do
                    int64_t* rax_24 = sub_140a242a0()
                    int64_t r8_6 = *rax_24
                    (*(r8_6 + 0x30))(rax_24, zx.q(data_14399e5e0), r8_6)
                    int64_t* rcx_12 = *(rbx_1 + 0x20)
                    i_1 = (*(*rcx_12 + 0x20))(rcx_12, 1, 0)
                while (i_1 == 0)
        
        break

rbx_1[0xc].b = 1

if (rax_12 == 0)
    return 

rax_12[1].d -= 1

if (rax_12[1].d != 1)
    return 

(**rax_12)(rax_12)
int32_t rdi_5 = *(rax_12 + 0xc)
*(rax_12 + 0xc) -= 1

if (rdi_5 == 1)
    (*rax_12)[1](rax_12, zx.q(rdi_5))
