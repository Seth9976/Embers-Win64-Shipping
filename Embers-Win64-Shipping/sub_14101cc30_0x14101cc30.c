// 函数: sub_14101cc30
// 地址: 0x14101cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xf]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
    arg1[0xf] = 0

HANDLE hObject = arg1[0x16]

if (hObject != -1)
    CloseHandle(hObject)
    arg1[0x16] = -1

if (arg1[0xa] != arg1[0xb])
    int64_t rdx_3 = arg1[1] + modu.dp.q(0:(arg1[0xa]), *arg1) * 0x18
    arg1[0xa] += 1
    
    if (rdx_3 != 0)
        while (arg1[0xa] != arg1[0xb])
            int64_t rdx_6 = arg1[1] + modu.dp.q(0:(arg1[0xa]), *arg1) * 0x18
            arg1[0xa] += 1
            
            if (rdx_6 == 0)
                break

arg1[9].b = 1

if (SetEvent(arg1[2]) == 0)
    GetLastError()

HANDLE hObject_1 = arg1[3]

if (hObject_1 != -1)
    CloseHandle(hObject_1)
    arg1[3] = -1

HANDLE hObject_2 = arg1[2]

if (hObject_2 != -1)
    CloseHandle(hObject_2)
    arg1[2] = -1

HANDLE hObject_3 = arg1[0x17]

if (hObject_3 != -1)
    CloseHandle(hObject_3)
    arg1[0x17] = -1

void* i

for (i = arg1[0xc]; i != &arg1[0xc]; i = arg1[0xc])
    int64_t* rcx_6 = *(i - 0x10)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
        *(i - 0x10) = 0
    
    int64_t* r8_1 = arg1[0xc]
    *r8_1[1] = *r8_1
    *(*r8_1 + 8) = r8_1[1]
    j_sub_140a74f90(i - 0x10)

return i
