// 函数: sub_140a24550
// 地址: 0x140a24550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    return 

int64_t* rax_1 = *arg1
wchar16* _String

if (rax_1[1].d == 0)
    _String = &data_142d40450
else
    _String = *rax_1

int32_t rax_2 = _wtoi(_String)
int64_t* rcx = data_143cf8c40
int64_t rdx_1 = *rcx
int32_t rax = (*(rdx_1 + 0x18))(rcx, rdx_1)
int32_t rcx_1 = data_143cf084c
int32_t rbx_1 = rcx_1 + rax

if (rax_2 s>= rbx_1 || rax_2 s< 0 || rax_2 == rcx_1)
    return 

int32_t r14_2 = rbx_1 - rax_2

if (rax_2 s<= rcx_1)
    int32_t i = r14_2 - 1
    
    if (i s>= rbx_1 - rcx_1)
        do
            void* rbp_2 = data_143cf8c40
            
            for (int32_t j = 0; j s< 3; j += 1)
                void* rcx_5 =
                    *(rbp_2 + sx.q(j * *(rbp_2 + 0x7c4) + i + *(rbp_2 + 0x7bc)) * 0x18 + 8)
                *(rcx_5 + 0x45) = 0
                LeaveCriticalSection(rcx_5 + 0x48)
            
            i -= 1
        while (i s>= rbx_1 - data_143cf084c)
else
    for (int32_t i_1 = rbx_1 - rcx_1 - 1; i_1 s>= r14_2; i_1 -= 1)
        void* rbp_1 = data_143cf8c40
        
        for (int32_t j_1 = 0; j_1 s< 3; )
            void* rdi_1 =
                *(rbp_1 + sx.q(*(rbp_1 + 0x7c4) * j_1 + *(rbp_1 + 0x7bc) + i_1) * 0x18 + 8)
            EnterCriticalSection(rdi_1 + 0x48)
            j_1 += 1
            *(rdi_1 + 0x45) = 1

data_143cf084c = rax_2
