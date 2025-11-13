// 函数: sub_140ab28f0
// 地址: 0x140ab28f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140aae970()
char rbx = *rax
*rax = 0
sub_140a9eb70(4)
*rax = rbx

if (data_143db9ac0 != 0)
    int64_t rcx_1 = data_143db9ab0
    data_143db9ac0 = 0
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

char* rax_1 = sub_140a752e0()
int64_t* rdi_1 = *(rax_1 + 0x30)

if (rdi_1 != 0)
    rdi_1[1].d += 1

int64_t* rax_2 = sub_140903440(*(rax_1 + 0x28))
sub_140ab51b0(sub_140aae970(), rax_2, 4)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rbx_2 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbx_2 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))

*sub_140aae970() = 1
void* rax_8 = sub_140aae970()
EnterCriticalSection(rax_8 + 8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
sub_140ac5760(rax_8 + 0x30)
sub_140aa4dd0(rax_8 + 0x30, *(rax_8 + 0x38) - *(rax_8 + 0x64), 1)
sub_140a8d410(rax_8 + 0xd0)
sub_1405b6520(rax_8 + 0xd0, *(rax_8 + 0xd8) - *(rax_8 + 0x104), 1)
sub_140ac5690(rax_8 + 0x80)
sub_140aa4bc0(rax_8 + 0x80, *(rax_8 + 0x88) - *(rax_8 + 0xb4), 1)
CRITICAL_SECTION* lpCriticalSection = sub_140ab2000()
EnterCriticalSection(lpCriticalSection)
sub_140a8d4f0(&lpCriticalSection[1])
int64_t result = sub_140aa4b10(&lpCriticalSection[1], 
    lpCriticalSection->__offset(0x30).d - lpCriticalSection->__offset(0x5c).d, 1)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

if (rax_8 == -8)
    return result

return LeaveCriticalSection(rax_8 + 8)
