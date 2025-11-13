// 函数: sub_1407c11b0
// 地址: 0x1407c11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
void* rax = sub_140d3c6e0(&arg1[1])
int32_t r12 = 0
void* rbp = *(rax + 0x430)
int32_t rdx = 1

if (rbp != 0)
    rdx = *(rbp + 0xe0)
    r12 = arg2.d

int64_t rdi = sx.q(arg1->__offset(0x88).d)

if (rdx s> rdi.d)
    arg1->__offset(0x88).d = rdx
    int32_t i_1 = rdx - rdi.d
    
    if (rdx s> arg1->__offset(0x8c).d)
        sub_1407c3b60(arg1 + 0x80)
    
    int32_t* rcx_3 = rdi * 0x38 + arg1->__offset(0x80).q
    
    if (i_1 != 0)
        void* rax_1 = &rcx_3[5]
        int32_t i
        
        do
            *rcx_3 = 0
            rcx_3 = &rcx_3[0xe]
            *(rax_1 - 0xc) = 0
            *(rax_1 - 4) = 0
            __builtin_memset(rax_1 + 4, 0, 0x20)
            rax_1 += 0x38
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rdx s< rdi.d)
    sub_1407c29a0(arg1 + 0x80, rdx, rdi.d - rdx, 1)

int32_t rcx_5 = arg2:4.d

if ((rcx_5.b & 1) != 0 || (rcx_5.b & 2) != 0)
    arg1->__offset(0x38).d += 1

int32_t* rdx_2 = arg1->__offset(0x80).q
int64_t rdi_2 = sx.q(r12)
int64_t r15 = rdi_2 * 0x38
uint8_t rbx_3 = (rcx_5 u>> 1).b & 1

if (rbx_3 != 0)
    rdx_2[rdi_2 * 0xe] += 1

if (((rcx_5 u>> 2).b & 1) != 0)
    int64_t rdx_3 = sx.q(arg1->__offset(0x34).d)
    int64_t rax_7 = rdx_3 * 2
    
    if (*(arg1 + (rax_7 << 3) + 0x48) == 0 || *(arg1 + (rax_7 << 3) + 0x68) == 0)
        sub_1407cd1b0(arg1)
        rdx_3 = zx.q(arg1->__offset(0x34).d)
    
    int64_t r9_2 = sx.q(rdx_3.d)
    int64_t r8_3 = r9_2 ^ 1
    
    if (*(arg1 + r8_3 * 0x10 + 0x48) != *(arg1 + r9_2 * 0x10 + 0x48))
        sub_140780a30(((r8_3 + 4) << 4) + arg1, ((r9_2 + 4) << 4) + arg1)
        rdx_3 = zx.q(arg1->__offset(0x34).d)
    
    int64_t rdx_7 = sx.q(rdx_3.d)
    int64_t r8_5 = rdx_7 ^ 1
    
    if (*(arg1 + r8_5 * 0x10 + 0x68) != *(arg1 + rdx_7 * 0x10 + 0x68))
        sub_140780b40(((r8_5 + 6) << 4) + arg1, ((rdx_7 + 6) << 4) + arg1)
    
    if (rbx_3 != 0)
        uint64_t rcx_18 = sx.q(arg1->__offset(0x34).d)
        int64_t r8_6 = arg1->__offset(0x80).q
        
        if ((((rcx_18 + 1) << 4) + r8_6)[rdi_2 * 0xe] == 0)
            if (rbp != 0)
                int64_t* rdi_3 = *(**(rbp + 0x58) + (rdi_2 << 3))
                void* rax_18 = sub_141f66050(rax, r12)
                int64_t rcx_22 = sx.q(arg1->__offset(0x34).d) << 4
                sub_14230b740(rax, rcx_22 + r15 + arg1->__offset(0x80).q + 8, arg1 + 0x40 + rcx_22, 
                    rdi_3, rax_18)
                sub_14230bca0(rax, arg1->__offset(0x80).q + 0x28 + r15, 
                    ((sx.q(arg1->__offset(0x34).d) + 4) << 4) + arg1, rdi_3, rax_18)
                rcx_18 = zx.q(arg1->__offset(0x34).d)
                r8_6 = arg1->__offset(0x80).q
            
            int64_t rcx_27 = sx.q(rcx_18.d)
            void* rcx_29 = (rcx_27 << 4) + r8_6
            void* r9_8 = ((rcx_27 ^ 1) << 4) + r8_6
            
            if (*(r9_8 + r15 + 0x10) != *(rcx_29 + r15 + 0x10))
                sub_140780bc0(r9_8 + 8 + r15, rcx_29 + 8 + r15)

return LeaveCriticalSection(arg1) __tailcall
