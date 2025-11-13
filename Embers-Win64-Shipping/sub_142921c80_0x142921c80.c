// 函数: sub_142921c80
// 地址: 0x142921c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x26, 0x6a, 0x43, "crypto\engine\eng_list.c", 0x11a)
    return 0

int64_t i_1 = 0
int32_t rcx = 0

if (sub_1428a5c60(&data_143feccc8, sub_1428e3240) != 0)
    rcx = data_143fecccc

if (rcx == 0)
    sub_1428a5670(0x26, 0x6a, 0x41, "crypto\engine\eng_list.c", 0x11e)
    return 0

sub_1428a5c40(data_144020538)
int64_t* i

for (i = data_143fecf90; i != 0; i = i[0x17])
    char* rax_3 = arg1
    uint32_t j
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rax_3)
        j = zx.d(*(rax_3 + *i - arg1))
        
        if (rdx_1 != j)
            break
        
        rax_3 = &rax_3[1]
    while (j != 0)
    
    if (rdx_1 - j == 0)
        if ((i[0x13].b & 4) == 0)
            *(i + 0x9c) += 1
        else
            int64_t* i_2 = sub_1428e3060()
            
            if (i_2 != 0)
                *i_2 = *i
                i_2[1] = i[1]
                i_2[2] = i[2]
                i_2[3] = i[3]
                i_2[4] = i[4]
                i_2[5] = i[5]
                i_2[6] = i[6]
                i_2[7] = i[7]
                i_2[8] = i[8]
                i_2[9] = i[9]
                i_2[0xb] = i[0xb]
                i_2[0xc] = i[0xc]
                i_2[0xd] = i[0xd]
                i_2[0xe] = i[0xe]
                i_2[0xf] = i[0xf]
                i_2[0x10] = i[0x10]
                i_2[0x12] = i[0x12]
                int32_t rax_21 = i[0x13].d
                i = i_2
                i_2[0x13].d = rax_21
            else
                i = nullptr
        
        break

sub_1428a5d00(data_144020538)

if (i != 0)
    return i

do
    char rax_23 = arg1[i_1]
    i_1 += 1
    
    if (rax_23 != *(i_1 + 0x143499867))
        char* rax_25 = getenv("OPENSSL_ENGINES")
        char* rdi = rax_25
        
        if (rax_25 == 0)
            rdi = "C:\Windows\lib\engines-1_1"
        
        int64_t* i_3 = sub_142921c80("dynamic")
        i = i_3
        
        if (
                i_3 != 0 && sub_142933c40(i_3, "ID", arg1, 0) != 0 && sub_142933c40(i, "DIR_LOAD", 
                    &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[1], 
                0) != 0 && sub_142933c40(i, "DIR_ADD", rdi, 0) != 0 && sub_142933c40(i, "LIST_ADD", 1", 0)
                != 0 && sub_142933c40(i, "LOAD", nullptr, 0) != 0)
            return i
        
        break
while (i_1 != 8)

sub_1428e2fb0(i)
sub_1428a5670(0x26, 0x6a, 0x74, "crypto\engine\eng_list.c", 0x14f)
sub_1428a4880(2)
return nullptr
