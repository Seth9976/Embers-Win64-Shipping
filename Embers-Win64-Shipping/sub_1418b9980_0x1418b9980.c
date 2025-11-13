// 函数: sub_1418b9980
// 地址: 0x1418b9980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418bd350(arg1)
void* lpCriticalSection = &arg1[0x25]
int64_t rcx = *(lpCriticalSection + 0x28)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = DeleteCriticalSection(lpCriticalSection)
int64_t i_1 = 8

for (int64_t i = 8; i != 0; )
    int64_t rcx_2 = *(lpCriticalSection - 0x10)
    lpCriticalSection -= 0x10
    i -= 1
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)

void* rbx = &arg1[0x15]

do
    int64_t rcx_3 = *(rbx - 0x10)
    rbx -= 0x10
    i_1 -= 1
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
while (i_1 != 0)

int64_t rcx_4 = arg1[3]

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
