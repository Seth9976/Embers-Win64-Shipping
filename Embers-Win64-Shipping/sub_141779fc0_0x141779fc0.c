// 函数: sub_141779fc0
// 地址: 0x141779fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = *(arg2 + 0x10)

if (rdi.d != rax)
    arg1[1].d = rax
    int32_t i_6 = rax - rdi.d
    
    if (rax s> *(arg1 + 0xc))
        sub_1407755b0(arg1)
    
    int32_t* r8_2 = rdi * 0x58 + *arg1
    
    if (i_6 != 0)
        int64_t* rdx_1 = &r8_2[0xa]
        int32_t i
        
        do
            *r8_2 = 0
            int64_t* rcx = &rdx_1[-2]
            rdx_1[-4] = 0
            r8_2 = &r8_2[0x16]
            rdx_1[-3] = 0
            *rdx_1 = 0
            rdx_1[1].d = 0
            *(rdx_1 + 0xc) = 0x80
            int64_t* rax_1 = *rdx_1
            rdx_1 = &rdx_1[0xb]
            
            if (rax_1 != 0)
                rcx = rax_1
            
            *rcx = 0
            rcx[1] = 0
            rdx_1[-9].d = 0xffffffff
            *(rdx_1 - 0x44) = 0
            rdx_1[-7] = 0
            rdx_1[-6].d = 0
            i = i_6
            i_6 -= 1
        while (i != 1)

int32_t* i_1 = arg1[8]

for (void* rbp = &i_1[sx.q(arg1[9].d)]; i_1 != rbp; i_1 = &i_1[1])
    int64_t rdx_2 = sx.q(*i_1)
    *(rdx_2 * 0x58 + *arg1) = 0
    void* rbx_3 = rdx_2 * 0x58 + *arg1
    *(rbx_3 + 0x10) = 0
    
    if (*(rbx_3 + 0x14) != 0)
        sub_140638cc0(rbx_3 + 8, 0)
    
    *(rbx_3 + 0x38) = 0xffffffff
    *(rbx_3 + 0x3c) = 0
    sub_14059a8e0(rbx_3 + 0x18, 0)
    int32_t j_2 = *(rbx_3 + 0x50)
    
    if (j_2 s> 0)
        int64_t r8_3 = 0
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            void* rcx_4 = *(rbx_3 + 0x48)
            void* rax_4 = rbx_3 + 0x40
            int64_t rdx_5 = (sx.q(*(rbx_3 + 0x50)) - 1) & r8_3
            
            if (rcx_4 != 0)
                rax_4 = rcx_4
            
            r8_3 += 1
            *(rax_4 + (rdx_5 << 2)) = 0xffffffff
            j = j_1
            j_1 -= 1
        while (j != 1)

int32_t rax_5 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405c5570(&arg1[2], 0)

int32_t rax_6 = *(arg1 + 0x2c)
void* rdi_1 = arg1[4]
int32_t i_7 = arg1[5].d

if (rax_6 s< 0)
    if (i_7 != 0)
        void* rdi_3 = rdi_1 + 8
        int32_t i_2
        
        do
            sub_141761fd0(rdi_3)
            rdi_3 += 0x18
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
        rax_6 = *(arg1 + 0x2c)
    
    arg1[5].d = 0
    
    if (rax_6 != 0)
        sub_1405a5130(&arg1[4], 0)
else
    if (i_7 != 0)
        int64_t* rdi_2 = rdi_1 + 8
        int32_t i_3
        
        do
            sub_141761fd0(rdi_2)
            rdi_2 = &rdi_2[3]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    arg1[5].d = 0

int64_t rdi_4 = sx.q(arg1[3].d)
int32_t rax_7 = *(arg2 + 0x20)

if (rax_7 s> rdi_4.d)
    arg1[3].d = rax_7
    int32_t i_8 = rax_7 - rdi_4.d
    
    if (rax_7 s> *(arg1 + 0x1c))
        sub_1405a4d70(&arg1[2])
    
    int64_t* rdx_7 = arg1[2] + (rdi_4 << 3)
    
    if (i_8 != 0)
        int32_t i_4
        
        do
            *rdx_7 = -1
            rdx_7 = &rdx_7[1]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
else if (rax_7 s< rdi_4.d && rax_7 != rdi_4.d)
    arg1[3].d = rax_7
    sub_1405c53d0(&arg1[2])

int64_t rdi_5 = sx.q(arg1[5].d)
int32_t rdx_8 = *(arg2 + 0x30)

if (rdx_8 s> rdi_5.d)
    arg1[5].d = rdx_8
    int32_t i_9 = rdx_8 - rdi_5.d
    
    if (rdx_8 s> *(arg1 + 0x2c))
        sub_1405a4df0(&arg1[4])
    
    int32_t* rdx_10 = arg1[4] + rdi_5 * 0x18
    
    if (i_9 != 0)
        void* rax_10 = &rdx_10[5]
        int32_t i_5
        
        do
            *rdx_10 = 0
            rdx_10 = &rdx_10[6]
            __builtin_memset(rax_10 - 0x10, 0, 0x14)
            rax_10 += 0x18
            i_5 = i_9
            i_9 -= 1
        while (i_5 != 1)
else if (rdx_8 s< rdi_5.d)
    sub_14177d910(&arg1[4], rdx_8, rdi_5.d - rdx_8, 1)

void* result = arg2 + 0xc8

if (&arg1[8] != result)
    int64_t rbx_6 = sx.q(*(result + 8))
    int64_t rdi_7 = *result
    int32_t r8_5 = *(arg1 + 0x4c)
    arg1[9].d = rbx_6.d
    
    if (rbx_6.d != 0 || r8_5 != 0)
        sub_140638750(&arg1[8], rbx_6.d, r8_5)
        return memcpy(arg1[8], rdi_7, (rbx_6 << 2).d)
    
    *(arg1 + 0x4c) = 0

return result
